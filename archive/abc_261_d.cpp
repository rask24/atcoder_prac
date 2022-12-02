#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	long long N, M;
	cin >> N >> M;
	vector<long long> X(N);
	for (long long i = 0; i < N; ++i)
		cin >> X[i];
	vector<pair<long long, long long>> P(M);
	for (long long i = 0; i < M; ++i)
		cin >> P[i].first >> P[i].second;
	sort(P.begin(), P.end());
	
	
	vector<vector<long long>> dp(N + 1, vector<long long> (N + 1, -1));
	dp[0][0] = 0;
	for (long long i = 0; i < N; ++i) {
		long long k = 0;
		for (long long j = 0; j <= i; ++j) {
			if (k < M && j + 1 == P[k].first) {
				chmax(dp[i + 1][j + 1], dp[i][j] + X[i] + P[k].second);
				++k;
			} else {
				chmax(dp[i + 1][j + 1], dp[i][j] + X[i]);
			}
			chmax(dp[i + 1][0], dp[i][j]);
		}
	}

	long long ans = 0;
	for (long long i = 0; i <= N; ++i)
		chmax(ans, dp[N][i]);
	cout << ans << endl;
}