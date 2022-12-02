#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

int main()
{
	long long N, M, K;
	cin >> N >> M >> K;
	vector<vector<long long>> dp(N + 1, vector<long long> (K + 1, 0));
	dp[0][0] = 1;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < K; ++j) {
			if (dp[i][j] == 0)
				continue;
			for (int k = 1; k <= M; ++k) {
				if (j + k <= K) {
					dp[i + 1][j + k] += dp[i][j];
					dp[i + 1][j + k] %= MOD;
				}
			}
		}
	}

	long long ans = 0;
	for (int i = 0; i <= K; ++i) {
		ans = (ans + dp[N][i]) % MOD;
	}
	cout << ans << endl;
}