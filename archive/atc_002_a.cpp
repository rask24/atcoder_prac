#include <bits/stdc++.h>
using namespace std;

int R, C;
vector<vector<char>> maze;
vector<vector<int>> dist;

void bfs(vector<vector<int>> &dist, pair<int, int> s)
{
	queue<pair<int, int>> que;
	que.push(s);
	dist[s.first][s.second] = 0;

	while (!que.empty()) {
		pair<int, int> v = que.front();
		que.pop();
		for (int bit = 0; bit < 4; ++bit) {
			int r = v.first + ((bit & 2) ? 0 : (bit & 1) ? 1 : -1);
			int c = v.second + ((!(bit & 2)) ? 0 : (bit & 1) ? 1 : -1);
			if (dist[r][c] != -1 or maze[r][c] == '#')
				continue;
			que.push(make_pair(r, c));
			dist[r][c] = dist[v.first][v.second] + 1;
		}
	}
}

int main()
{
	cin >> R >> C;
	pair<int, int> s, g;
	cin >> s.first >> s.second >> g.first >> g.second;
	--s.first, --s.second, --g.first, --g.second;
	maze.resize(R, vector<char> (C));
	dist.assign(R, vector<int> (C, -1));
	for (int r = 0; r < R; ++r) {
		for (int c = 0; c < C; ++c) {
			cin >> maze[r][c];
		}
	}

	bfs(dist, s);
	cout << dist[g.first][g.second] << endl;
}