#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<long long> a(M);
	for (int i = 0; i < M; ++i)
		cin >> a[i];
	vector<long long> dp(N + 1, 0);
	dp[0] = 1;
	int k = 0;
	for (int i = 1; i <= N; ++i) {
		if (k < M && i == a[k]) {
			++k;
			continue;
		}
		if (i - 2 >= 0)  {
			dp[i] += dp[i - 2];
			dp[i] %= MOD;
		}
		dp[i] += dp[i - 1];
		dp[i] %= MOD;
	}
	cout << dp[N] << endl;
}