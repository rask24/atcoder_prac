#include <bits/stdc++.h>
using namespace std;

int H, W;
vector<vector<char>> C;
vector<vector<bool>> cont;

void dfs(int x, int y)
{
	if (x < 0 || x >= H || y < 0 || y >= W)
		return ;
	if (C[x][y] == '#')
		return ;
	if (cont[x][y])
		return ;
	cont[x][y] = true;
	dfs(x + 1, y);
	dfs(x, y + 1);
}

int main()
{
	cin >> H >> W;
	C.resize(H, vector<char> (W));
	for (int h = 0; h < H; ++h) {
		for (int w = 0; w < W; ++w) {
			cin >> C[h][w];
		}
	}
	cont.assign(H, vector<bool> (W, false));
	dfs(0, 0);
	int ans = 0;
	for (int h = 0; h < H; ++h) {
		for (int w = 0; w < W; ++w) {
			if (cont[h][w])
				ans = max(ans, h + w + 1);
		}
	}
	cout << ans << endl;
}