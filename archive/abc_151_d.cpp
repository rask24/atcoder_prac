#include <bits/stdc++.h>
using namespace std;

int H, W;
vector<int> dx = {1, -1, 0, 0};
vector<int> dy = {0, 0, 1, -1};

int bfs(vector<vector<char>> &field, pair<int, int> s)
{
	vector<vector<int>> dist(H, vector<int> (W, -1));
	queue<pair<int, int>> que;
	que.push(s);
	dist[s.first][s.second] = 0;

	while (!que.empty()) {
		auto [x, y] = que.front();
		que.pop();
		for (int d = 0; d < 4; ++d) {
			int nx = x + dx[d];
			int ny = y + dy[d];
			if (nx < 0 || nx >= H || ny < 0 || ny >= W || field[nx][ny] == '#' || dist[nx][ny] != -1)
				continue;
			dist[nx][ny] = dist[x][y] + 1;
			que.push(make_pair(nx, ny));
		}
	}

	int cnt = 0;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cnt = max(cnt, dist[i][j]);
		}
	}
	return cnt;
}

int main()
{
	cin >> H >> W;
	vector<vector<char>> field(H, vector<char> (W));
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cin >> field[i][j];
		}
	}
	int ans = 0;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			if (field[i][j] == '.')
				ans = max(ans, bfs(field, make_pair(i, j)));
		}
	}
	cout << ans << endl;
}