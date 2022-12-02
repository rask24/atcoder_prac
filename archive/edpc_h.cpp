#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
	int H, W;
	cin >> H >> W;
	vector<vector<char>> field(H, vector<char> (W));
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cin >> field[i][j];
		}
	}
	vector<vector<int>> dp(H, vector<int> (W, 0));
	dp[0][0] = 1;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			if (field[i][j] == '#')
				continue;
			if (i - 1 >= 0 && field[i - 1][j] == '.') {
				dp[i][j] += dp[i - 1][j];
				dp[i][j] %= MOD;
			}
			if (j - 1 >= 0 && field[i][j - 1] == '.') {
				dp[i][j] += dp[i][j - 1];
				dp[i][j] %= MOD;
			}
		}
	}

	cout << dp.back().back() << endl;
}