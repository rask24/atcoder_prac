#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> a(M);
	for (int i = 0; i < M; ++i) {
		int C;
		cin >> C;
		a[i].resize(C);
		for (int j = 0; j < C; ++j)
			cin >> a[i][j];
	}
	set<int> comp;
	for (int i = 1; i <= N; ++i)
		comp.insert(i);

	long long ans = 0;
	for (long long bit = 1; bit < (1LL << M); ++bit) {
		set<int> s;
		for (int i = 0; i < M; ++i) {
			if (bit & (1LL << i)) {
				for (int j = 0; j < a[i].size(); ++j) {
					s.insert(a[i][j]);
				}
			}
		}
		if (s == comp)
			++ans;
	}
	cout << ans << endl;
}