#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

vector<int> path;

int X, Y;

bool dfs(Graph &G, int v, int p = -1)
{
	if (v == Y) {
		return true;
	}
	for (int n : G[v]) {
		if (n == p)
			continue;
		if (dfs(G, n, v)) {
			path.push_back(n);
			return true;
		}
	}
	return false;
}

int main()
{
	int N;
	cin >> N >> X >> Y;
	--X, --Y;
	Graph G(N);
	for (int i = 0; i < N - 1; ++i) {
		int a, b;
		cin >> a >> b;
		--a, --b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dfs(G, X);
	path.push_back(X);
	reverse(path.begin(), path.end());
	for (int n : path)
		cout << n + 1 << " ";
	cout << endl;
}