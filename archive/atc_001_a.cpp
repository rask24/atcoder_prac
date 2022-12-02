#include <bits/stdc++.h>
using namespace std;

vector<string> m;
vector<vector<bool>> seen;
int H, W;

void dfs(int h, int w)
{
	if (m[h][w] == '#' or seen[h][w])
		return ;

	seen[h][w] = true;
	if (h > 0)
		dfs(h - 1, w);
	if (h < H - 1)
		dfs(h + 1, w);
	if (w > 0)
		dfs(h, w - 1);
	if (w < W - 1)
		dfs(h, w + 1);
}

int main()
{
	cin >> H >> W;
	m.resize(H);
	seen.assign(H, vector<bool> (W, false));
	int sx, sy, gx, gy;
	for (int i = 0; i < H; ++i) {
		cin >> m[i];
		for (int j = 0; j < W; ++j) {
			if (m[i][j] == 's')
				sx = i, sy = j;
			if (m[i][j] == 'g') {
				gx = i, gy = j;
				m[i][j] = '.';
			}
		}
	}
	dfs(sx, sy);
	cout << ((seen[gx][gy]) ? "Yes" : "No") << endl;
}