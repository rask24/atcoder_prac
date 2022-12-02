#include <bits/stdc++.h>
using namespace std;

int H, W;
vector<string> G;
vector<vector<int>> seen;
pair<int, int> ans;

void solve(int h, int w)
{
	if (G[h][w] == 'U' and h == 0) {
		ans.first = h + 1, ans.second = w + 1;
		return ;
	} else if (G[h][w] == 'D' and h == H - 1) {
		ans.first = h + 1, ans.second = w + 1;
		return ;
	} else if (G[h][w] == 'L' and w == 0) {
		ans.first = h + 1, ans.second = w + 1;
		return ;
	} else if (G[h][w] == 'R' and w == W - 1) {
		ans.first = h + 1, ans.second = w + 1;
		return ;
	}

	if (seen[h][w]) {
		cout << -1 << endl;
		exit(0);
	}

	++seen[h][w];

	if (G[h][w] == 'U')
		solve(h - 1, w);
	else if (G[h][w] == 'D')
		solve(h + 1, w);
	else if (G[h][w] == 'L')
		solve(h, w - 1);
	else
		solve(h, w + 1);
}

int main()
{
	cin >> H >> W;
	G.resize(H);
	seen.assign(H, vector<int> (W));
	for (int i = 0; i < H; ++i)
		cin >> G[i];
	solve(0, 0);
	cout << ans.first << " " << ans.second << endl;
}