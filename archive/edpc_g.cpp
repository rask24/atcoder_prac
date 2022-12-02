#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

vector<bool> seen;
vector<int> order;

void dfs(Graph &G, int s)
{
	seen[s] = true;
	for (auto v : G[s]) {
		if (seen[v])
			continue;
		dfs(G, v);
	}
	order.push_back(s);
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
	}
	
	seen.assign(N, false);
	for (int v = 0; v < N; ++v) {
		if (seen[v])
			continue;
		dfs(G, v);
	}
	reverse(order.begin(), order.end());

	vector<int> dp(N, 0);
	for (int i = 0; i < N; ++i) {
		for (auto v : G[order[i]]) {
			chmax(dp[v], dp[order[i]] + 1);
		}
	}
	int ans = 0;
	for (int i = 0; i < N; ++i)
		chmax(ans, dp[i]);
	cout << ans << endl;
}