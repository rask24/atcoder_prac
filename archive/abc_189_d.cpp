#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i) {
		string S;
		cin >> S;
		a[i] = (S == "AND") ? 1 : 0;
	}
	vector<vector<long long>> dp(N + 1, vector<long long> (2, 0));
	dp[0][0] = dp[0][1] = 1;
	for (int i = 0; i < N; ++i) {
		if (a[i]) {
			dp[i + 1][0] = dp[i][0] * 2 + dp[i][1];
			dp[i + 1][1] = dp[i][1];
		} else {
			dp[i + 1][0] = dp[i][0];
			dp[i + 1][1] = dp[i][0] + dp[i][1] * 2;
		}
	}
	cout << dp[N][1] << endl;
}