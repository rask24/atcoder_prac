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

int main()
{
	long long N, M;
	cin >> N >> M;
	vector<long long> A(M), B(M);
	for (int i = 0; i < M; ++i) {
		cin >> A[i] >> B[i];
		--A[i], --B[i];
	}
	long long ans = 0;
	for (int i = 0; i < M; ++i) {
		UnionFind uf(N);
		for (int j = 0; j < M; ++j) {
			if (i == j)
				continue;
			uf.unite(A[j], B[j]);
		}
		long long cnt = 0;
		for (int j = 0; j < N; ++j) {
			if (uf.root(j) == j)
				++cnt;
		}
		if (cnt > 1)
			++ans;
	}
	cout << ans << endl;
}