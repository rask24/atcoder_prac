#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

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
	long long ans = 1;
	for (int k = 0; k < H + W - 1; ++k) {
		int r = 0, b = 0;
		for (int i = 0; i < H; ++i) {
			for (int j = 0; j < W; ++j) {
				if (i + j == k) {
					if (field[i][j] == 'R')
						++r;
					else if (field[i][j] == 'B')
						++b;
				}
			}
		}
		if (r == 0 && b == 0)
			ans = ans * 2 % MOD;
		else if (r > 0 && b > 0)
			ans = 0;
	}
	cout << ans << endl;
}