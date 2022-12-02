#include <bits/stdc++.h>
using namespace std;

struct Edge {
	int to;
	long long w;
	Edge(int to, long long w) : to(to), w(w) {}
};
using Graph = vector<vector<Edge>>;
const long long INF = 1LL << 60;
template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }

void dijkstra(const Graph &G, vector<long long> &dist, int s)
{
	dist[s] = 0;
	priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> que;
	que.push(make_pair(dist[s], s));
	while (!que.empty()) {
		int v = que.top().second;
		long long d = que.top().first;
		que.pop();
		if (d > dist[v])
			continue;
		for (auto e : G[v]) {
			if (chmin(dist[e.to], dist[v] + e.w)) {
				que.push(make_pair(dist[e.to], e.to));
			}
		}
	}
}

int main()
{
	int N, M;
	cin >> N >> M;
	Graph G(N);
	for (int i = 0; i < M; ++i) {
		int a, b, w;
		cin >> a >> b >> w;
		--a, --b;
		G[a].push_back(Edge(b, w));
		G[b].push_back(Edge(a, w));
	}
	
	vector<long long> dist_1(N, INF), dist_N(N, INF);
	dijkstra(G, dist_1, 0);
	dijkstra(G, dist_N, N - 1);

	for (int i = 0; i < N; ++i) {
		cout << dist_1[i] + dist_N[i] << endl;
	}
}