#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(Graph &G, int s)
{
	seen[s] = true;

	for (auto v : G[s]) {
		if (seen[v])
			continue;
		dfs(G, v);
	}
}

int main()
{
	long long N;
	cin >> N;
	long long sx, sy, tx, ty;
	cin >> sx >> sy >> tx >> ty;
	vector<long long> x(N), y(N), r(N);
	for (int i = 0; i < N; ++i)
		cin >> x[i] >> y[i] >> r[i];
	
	Graph G(N);
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			long long d = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
			if (abs(d - r[i] * r[i] - r[j] * r[j]) <= 2 * r[i] * r[j]) {
				G[i].push_back(j);
				G[j].push_back(i);
			}
		}
	}

	int s_index = -1, t_index = -1;
	for (int i = 0; i < N; ++i) {
		long long ds = (x[i] - sx) * (x[i] - sx) + (y[i] - sy) * (y[i] - sy);
		long long dt = (x[i] - tx) * (x[i] - tx) + (y[i] - ty) * (y[i] - ty);
		if (ds == r[i] * r[i])
			s_index = i;
		if (dt == r[i] * r[i])
			t_index = i;
	}

	seen.assign(N, false);
	dfs(G, s_index);
	cout << ((seen[t_index]) ? "Yes" : "No") << endl;
}