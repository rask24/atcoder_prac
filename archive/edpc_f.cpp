#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S, T;
	cin >> S >> T;
	vector<vector<long long>> dp(S.size() + 1, vector<long long> (T.size() + 1, 0));
	dp[0][0] = 0;
	for (int i = 1; i <= S.size(); ++i) {
		for (int j = 1; j <= T.size(); ++j) {
			if (S[i - 1] == T[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	int l = dp.back().back();
	int i = S.size(), j = T.size();
	string ans(l, 0);
	while (l) {
		if (S[i - 1] == T[j - 1]) {
			ans[l - 1] = S[i - 1];
			--i, --j, --l;
		} else if (dp[i - 1][j] == dp[i][j]) {
			--i;
		} else {
			--j;
		}
	}
	cout << ans << endl;
}