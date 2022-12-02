#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;
	vector<vector<char>> s(H, vector<char> (W));
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cin >> s[i][j];
		}
	}

	bool achieve = true;
	for (int h = 0; h < H; ++h) {
		for (int w = 0; w < W; ++w) {
			if (s[h][w] == '.')
				continue;
			bool tmp = false;
			if (h > 0)
				tmp |= s[h - 1][w] == '#';
			if (h < H - 1)
				tmp |= s[h + 1][w] == '#';
			if (w > 0)
				tmp |= s[h][w - 1] == '#';
			if (w < W - 1)
				tmp |= s[h][w + 1] == '#';
			achieve &= tmp;
		}
	}
	cout << ((achieve) ? "Yes" : "No") << endl;
}