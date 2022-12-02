#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<vector<int>> dist;

void bfs(Graph &G, int s)
{
	queue<int> que;
	que.push(s);
	dist[s][s] = 0;

	while (!que.empty()) {
		int e = que.front();
		que.pop();
		for (auto n : G[e]) {
			if (dist[s][n] != -1)
				continue;
			dist[s][n] = dist[s][e] + 1;
			que.push(n);
		}
	}
}

int main()
{
	int N, M;
	cin >> N >> M;
	Graph G(N);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		--a, --b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dist.assign(N, vector<int> (N, -1));
	for (int i = 0; i < N; ++i) {
		bfs(G, i);
	}

	for (int i = 0; i < N; ++i) {
		int cnt = 0;
		for (int j = 0; j < N; ++j) {
			if (dist[i][j] == 2)
				++cnt;
		}
		cout << cnt << endl;
	}
}