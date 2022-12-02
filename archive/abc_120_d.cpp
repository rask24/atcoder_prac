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
	UnionFind uf(N);
	vector<long long> A(M), B(M);
	for (long long i = 0; i < M; ++i) {
		cin >> A[i] >> B[i];
		--A[i], --B[i];
	}
	vector<long long> ans(M);
	long long non = N * (N - 1) / 2;
	cerr << "" << endl;
	for (long long i = M - 1; i >= 0; --i) {
		ans[i] = non;
		long long a = uf.size(A[i]), b = uf.size(B[i]);
		if(uf.unite(A[i], B[i]))
			non -= a * b;
		
	}
	for (long long i = 0; i < M; ++i)
		cout << ans[i] << endl;
}