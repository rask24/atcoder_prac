#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

vector<int> black, white;

void dfs(Graph &G, int s, int level, int p = -1)
{
	if (level % 2 == 0)
		black.push_back(s);
	else
		white.push_back(s);
	for (int v : G[s]) {
		if (v == p)
			continue;
		dfs(G, v, level + 1, s);
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
	dfs(G, 0, 0);
	if (black.size() >= white.size()) {
		for (int i = 0; i < N / 2; ++i)
			cout << black[i] + 1 << " ";
		cout << endl;
	} else {
		for (int i = 0; i < N / 2; ++i)
			cout << white[i] + 1 << " ";
		cout << endl;
	}
}