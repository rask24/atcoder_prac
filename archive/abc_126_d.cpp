#include <bits/stdc++.h>
using namespace std;

struct Edge {
	int to;
	long long w;
	Edge(int to, long long w) : to(to), w(w) {}
};
using Graph = vector<vector<Edge>>;

vector<int> color;

void dfs(Graph &G, int s, int col)
{
	color[s] = col;
	for (auto v : G[s]) {
		if (color[v.to] != -1)
			continue;
		dfs(G, v.to, ((v.w % 2 == 0)) ? col : 1 - col);
	}
}

int main()
{
	int N;
	cin >> N;
	Graph G(N);
	for (int i = 0; i < N - 1; ++i) {
		int a, b, w;
		cin >> a >> b >> w;
		--a, --b;
		G[a].push_back(Edge(b, w));
		G[b].push_back(Edge(a, w));
	}
	color.assign(N, -1);
	dfs(G, 0, 0);
	for (int v : color)
		cout << v << endl;
}