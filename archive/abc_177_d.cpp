#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
	vector<long long> par, siz;
	UnionFind(long long n) : par(n, -1), siz(n, 1) {  }
	long long root(long long x) {
		if (par[x] == -1)
			return x;
		else
			return par[x] = root(par[x]);
	}
	bool issame(long long x, long long y) {
		return root(x) == root(y);
	}
	bool unite(long long x, long long y) {
		x = root(x), y = root(y);
		if (x == y)
			return false;
		if (siz[x] < siz[y])
			swap(x, y);
		par[y] = x;
		siz[x] += siz[y];
		return true;
	}
	long long size(long long x) {
		return siz[root(x)];
	}
};

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	int N, M;
	cin >> N >> M;
	UnionFind uf(N);
	for (long long i = 0; i < M; ++i) {
		long long a, b;
		cin >> a >> b;
		--a, --b;
		uf.unite(a, b);
	}
	long long ans = 0;
	for (int i = 0; i < N; ++i) {
		if (uf.root(i) == i) {
			chmax(ans, uf.size(i));
		}
	}
	cout << ans << endl;
}