#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

bool exist = true;
vector<int> seen;

void dfs(Graph &G, int v, int p)
{
	++seen[v];
	if (seen[v] > 2) {
		exist = false;
		return ;
	}
	for (auto x : G[v]) {
		if (x == p)
			continue;
		dfs(G, x, v);
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
	seen.assign(N, 0);
	for (int i = 0; i < N; ++i) {
		if (G[i].size() > 2)
			exist = false;
		if (seen[i] == 0)
			dfs(G, i, -1);
	}
	cout << ((exist) ? "Yes" : "No") << endl;
}