#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
	long long N;
	cin >> N;
	vector<long long> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	if (N == 1) {
		cout << A[0] << endl;
		return 0;
	}
	vector<vector<long long>> dp(N - 1, vector<long long> (2, 0));
	vector<vector<long long>> cnt(N - 1, vector<long long> (2, 0));
	dp[0][0] = A[0] + A[1];
	dp[0][1] = A[0] - A[1];
	cnt[0][0] = cnt[0][1] = 1;
	for (int i = 1; i < N - 1; ++i) {
		dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + A[i + 1] * (cnt[i - 1][0] + cnt[i - 1][1])) % MOD;
		dp[i][1] = (dp[i - 1][0] - ((A[i + 1] * cnt[i - 1][0]) % MOD) + MOD) % MOD;
		cnt[i][0] = (cnt[i - 1][0] + cnt[i - 1][1]) % MOD;
		cnt[i][1] = cnt[i - 1][0];
	}
	cout << (dp[N - 2][0] + dp[N - 2][1]) % MOD << endl;
}