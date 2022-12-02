#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, M;
	cin >> N >> M;
	vector<long long> a(N), b(N);
	for (int i = 0; i < N; ++i)
		 cin >> a[i] >> b[i];
	vector<long long> c(M), d(M);
	for (int i = 0; i < M; ++i)
		 cin >> c[i] >> d[i];
	for (int i = 0; i < N; ++i) {
		long long val = 1e10;
		int p = -1;
		for (int j = 0; j < M; ++j) {
			if (chmin(val, abs(a[i] - c[j]) + abs(b[i] - d[j])))
				p = j + 1;
		}
		cout << p << endl;
	}
}