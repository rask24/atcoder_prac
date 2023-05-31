#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> field;
int H, W;
int ans = 0;

void dfs(int h, int w, set<int> s) {
	if (H <= h || W <= w)
		return ;
	if (s.find(field[h][w]) == s.end()) {
		s.insert(field[h][w]);
		if (h + 1 == H && w + 1 == W)
			++ans;
		if (h + 1 < H)
			dfs(h + 1, w, s);
		if (w + 1 < W)
			dfs(h, w + 1, s);
	}
}

int main() {
	cin >> H >> W;
	field.resize(H, vector<int> (W));
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cin >> field[i][j];
		}
	}
	set<int> s;
	dfs(0, 0, s);
	cout << ans << endl;
}