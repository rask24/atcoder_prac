#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<long long> T(N), K(N);
	vector<vector<int>> A(N);
	for (int i = 0; i < N; ++i) {
		cin >> T[i] >> K[i];
		A[i].resize(K[i]);
		for (int j = 0; j < K[i]; ++j) {
			cin >> A[i][j];
			--A[i][j];
		}
	}

	vector<bool> seen(N, false);
	long long ans = 0;
	seen.back() = true;
	for (int i = N - 1; i >= 0; --i) {
		if (seen[i]) {
			ans += T[i];
			for (auto v : A[i])
				seen[v] = true;
		}
	}
	cout << ans << endl;
}