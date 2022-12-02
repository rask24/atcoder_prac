#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

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
	for (int i = 0; i < N; ++i){
		sort(G[i].begin(), G[i].end());
	}
	for (int i = 0; i < N; ++i) {
		cout << G[i].size() << " ";
		for (int j = 0; j < G[i].size(); ++j) {
			cout << G[i][j] + 1 << " ";
		}
		cout << endl;
	}
}