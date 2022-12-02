#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

const long long INF = 1LL << 60;

int main()
{
	long long N, M;
	cin >> N >> M;
	vector<long long> A(N);
	for (long long i = 0; i < N; ++i)
		cin >> A[i];
	vector<vector<long long>> dp(N + 1, vector<long long> (M + 1, -INF));
	for (long long i = 0; i <= N; ++i)
		dp[i][0] = 0;
	for (long long i = 0; i < N; ++i) {
		for (long long j = 0; j <= M; ++j) {
			if (dp[i][j] == -1)
				continue;
			chmax(dp[i + 1][j], dp[i][j]);
			if (j < M)
				chmax(dp[i + 1][j + 1], dp[i][j] + (j + 1) * A[i]);
		}
	}
	cout << dp[N][M] << endl;
}