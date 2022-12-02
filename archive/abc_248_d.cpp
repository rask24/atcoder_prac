#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long N;
	cin >> N;

	vector<vector<long long>> index(N + 1);
	for (int i = 0; i < N; ++i) {
		long long a;
		cin >> a;
		index[a].push_back(i);
	}

	long long Q;
	cin >> Q;
	while (Q--) {
		long long L, R, X;
		cin >> L >> R >> X;
		--L, --R;
		cout << lower_bound(index[X].begin(), index[X].end(), R + 1) - lower_bound(index[X].begin(), index[X].end(), L) << endl;
	}
}