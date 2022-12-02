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
	vector<int> label(N, -1);
	label[0] = 0;
	queue<int> que;
	que.push(0);
	while (!que.empty()) {
		int v = que.front();
		que.pop();
		for (int n : G[v]) {
			if (label[n] != -1)
				continue;
			que.push(n);
			label[n] = v + 1;
		}
	}
	cout << "Yes" << endl;
	for (int i = 1; i < N; ++i)
		cout << label[i] << endl;
}