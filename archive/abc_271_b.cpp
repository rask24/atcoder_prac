#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, Q;
	cin >> N >> Q;
	vector<vector<int>> a(N);
	for (int i = 0; i < N; ++i) {
		int L;
		cin >> L;
		a[i].resize(L);
		for (int j = 0; j < L; ++j)
			cin >> a[i][j];
	}
	for (int i = 0; i < Q; ++i) {
		int s, t;
		cin >> s >> t;
		--s, --t;
		cout << a[s][t] << endl;
	}
}