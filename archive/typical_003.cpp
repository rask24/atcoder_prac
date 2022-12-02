#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

vector<int> dist;

void bfs(Graph &G, int s)
{
	queue<int> que;
	que.push(s);
	dist[s] = 0;

	while (!que.empty()) {
		int v = que.front();
		que.pop();

		for (int n : G[v]) {
			if (dist[n] != -1)
				continue;
			dist[n] = dist[v] + 1;
			que.push(n);
		}
	}
}

int main()
{
	int N;
	cin >> N;
	Graph G(N);
	for (int i = 0; i < N - 1; ++i) {
		int a, b;
		cin >> a >> b;
		--a, --b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dist.assign(N, -1);
	bfs(G, 0);
	int key = -1;
	int value = 0;
	for (int i = 0; i < N; ++i) {
		if (chmax(value, dist[i])) {
			key = i;
		}
	}
	dist.assign(N, -1);
	bfs(G, key);
	value = 0;
	for (int i = 0; i < N; ++i) {
		chmax(value, dist[i]);
	}
	cout << value + 1 << endl;
}