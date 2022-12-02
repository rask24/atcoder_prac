#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> T(N);
	int S = 0;
	for (int i = 0; i < N; ++i) {
		cin >> T[i];
		S += T[i];
	}
	vector<vector<bool>> dp(N + 1, vector<bool> (100001, false));
	dp[0][0] = true;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < 100000; ++j) {
			if (dp[i][j]) {
				dp[i + 1][j] = true;
				if (j + T[i] <= 100000)
					dp[i + 1][j + T[i]] = true;
			}
		}
	}

	int ans = 100000000;
	for (int j = 0; j <= 100000; ++j) {
		if (dp[N][j]) {
			ans = min(ans, max(j, S - j));
		}
	}
	cout << ans << endl;
}