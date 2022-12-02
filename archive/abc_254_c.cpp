#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<vector<int>> B(K);
	for (int i = 0; i < N; ++i) {
		int a;
		cin >> a;
		B[i % K].push_back(a);
	}

	for (int i = 0; i < K; ++i) {
		sort(B[i].begin(), B[i].end());
	}

	vector<int> S(N);
	for (int i = 0; i < K; ++i) {
		for (int j = 0; j < B[i].size(); ++j) {
			S[i + K * j] = B[i][j];
		}
	}
	
	bool ok = true;
	for (int i = 0; i < N - 1; ++i) {
		if (S[i] > S[i + 1])
			ok = false;
	}
	cout << ((ok) ? "Yes" : "No") << endl;
}