#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> H(N + 1);
	for (int i = 1; i <= N; ++i)
		cin >> H[i];
	Graph G(N + 1);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	int ans = 0;
	for (int i = 1; i <= N; ++i) {
		bool is_peak = true;
		for (int j = 0; j < G[i].size(); ++j) {
			if (H[i] <= H[G[i][j]])
				is_peak = false;
		}
		if (is_peak)
			++ans;
	}
	cout << ans << endl;
}