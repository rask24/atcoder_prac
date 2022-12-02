#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

int main()
{
	int N, M, X;
	cin >> N >> M >> X;
	vector<int> C(N);
	vector<vector<int>> A(N, vector<int> (M));
	for (int i = 0; i < N; ++i) {
		cin >> C[i];
		for (int j = 0; j < M; ++j) {
			cin >> A[i][j];
		}
	}

	long long ans = INF;
	for (long long bit = 0; bit < (1LL << N); ++bit) {
		vector<int> S(M, 0);
		long long cost = 0;

		for (int i = 0; i < N; ++i) {
			if (bit & (1LL << i)) {
				cost += C[i];
				for (int j = 0; j < M; ++j) {
					S[j] += A[i][j];
				}
			}
		}

		bool ok = true;
		for (int j = 0; j < M; ++j) {
			if (S[j] < X)
				ok = false;
		}

		if (ok)
			ans = min(ans, cost);
	}

	cout << ((ans == INF) ? -1 : ans) << endl;
}