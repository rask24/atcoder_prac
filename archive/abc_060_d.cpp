#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	long long N, W;
	cin >> N >> W;
	vector<long long> w(N), v(N);
	for (long long i = 0; i < N; ++i)
		 cin >> w[i] >> v[i];
	long long fw = w[0];
	long long S = 0;
	for (long long i = 0; i < N; ++i) {
		w[i] -= fw - 1;
		S += w[i];
	}
	vector<vector<vector<long long>>> dp(N + 1, vector<vector<long long>> (S + 1, vector<long long> (N + 1, -1)));
	dp[0][0][0] = 0;
	for (long long i = 0; i < N; ++i) {
		for (long long j = 0; j < S; ++j) {
			for (long long k = 0; k < N; ++k) {
				if (dp[i][j][k] == -1)
					continue;
				chmax(dp[i + 1][j][k], dp[i][j][k]);
				chmax(dp[i + 1][j + w[i]][k + 1], dp[i][j][k] + v[i]);
			}
		}
	}
	long long ans = 0;
	for (long long k = 0; k <= N; ++k) {
		for (long long j = 0; j <= S; ++j) {
			if (j + (fw - 1) * k <= W) {
				chmax(ans, dp[N][j][k]);
			}
		}
	}
	cout << ans << endl;
}