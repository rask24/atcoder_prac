#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;
	vector<vector<char>> S(H, vector<char> (W));
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cin >> S[i][j];
		}
	}
	vector<vector<int>> R(H, vector<int> (W));
	for (int i = 0; i < H; ++i) {
		int k = 0;
		for (int j = 0; j < W; ++j) {
			if (S[i][j] == '.')
				R[i][j] = ++k;
			else
				R[i][j] = k = 0;
		}
		for (int j = W - 1; j > 0; --j) {
			if (R[i][j] && R[i][j - 1])
				R[i][j - 1] = R[i][j];
		}
	}
	vector<vector<int>> C(H, vector<int> (W));
	for (int j = 0; j < W; ++j) {
		int k = 0;
		for (int i = 0; i < H; ++i) {
			if (S[i][j] == '.')
				C[i][j] = ++k;
			else
				C[i][j] = k = 0;
		}
		for (int i = H - 1; i > 0; --i) {
			if (C[i][j] && C[i - 1][j])
				C[i - 1][j] = C[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			if (S[i][j] == '#')
				continue;
			ans = max(ans, R[i][j] + C[i][j] - 1);
		}
	}
	cout << ans << endl;
}