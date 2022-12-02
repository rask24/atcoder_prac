#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }
template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

const long long INF = 1LL << 60;

int main()
{
	long long N, W;
	cin >> N >> W;
	long long V = 0;
	vector<long long> w(N), v(N);
	for (int i = 0; i < N; ++i) {
		cin >> w[i] >> v[i];
		V += v[i];
	}
	vector<vector<long long>> dp(N + 1, vector<long long> (V + 1, INF));
	dp[0][0] = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j <= V; ++j) {
			if (dp[i][j] == INF)
				continue;	
			chmin(dp[i + 1][j + v[i]], dp[i][j] + w[i]);
			chmin(dp[i + 1][j], dp[i][j]);
		}
	}

	long long ans = 0;
	for (long long i = 0; i <= N; ++i) {
		for (long long j = 0; j <= V; ++j) {
			if (dp[i][j] != -1 && dp[i][j] <= W)
				chmax(ans, j);
		}
	}
	cout << ans << endl;
}