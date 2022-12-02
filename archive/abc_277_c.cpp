#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> reach;

void dfs(Graph &G, int s)
{
	if (reach[s])
		return ;

	reach[s] = true;
	for (auto e : G[s]) {
		dfs(G, e);
	}
}

int main()
{
	int N;
	cin >> N;
	vector<int> A(N), B(N), T(2 * N);
	for (int i = 0; i < N; ++i) {
		cin >> A[i] >> B[i];
		T[2 * i] = A[i];
		T[2 * i + 1] = B[i];
	}
	T.push_back(1);
	sort(T.begin(), T.end());
	T.erase(unique(T.begin(), T.end()), T.end());
	vector<int> C(N), D(N);
	for (int i = 0; i < N; ++i) {
		C[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
		D[i] = lower_bound(T.begin(), T.end(), B[i]) - T.begin();
	}

	Graph G(T.size());
	for (int i = 0; i < N; ++i) {
		G[C[i]].push_back(D[i]);
		G[D[i]].push_back(C[i]);
	}
	reach.assign(T.size(), false);
	dfs(G, 0);

	int key = -1;
	for (int i = 0; i < reach.size(); ++i) {
		if (reach[i]) {
			key = i;
		}
	}
	cout << T[key] << endl;
}