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
	long long N, K, L;
	cin >> N >> K >> L;
	UnionFind road(N), train(N);
	for (long long i = 0; i < K; ++i) {
		long long a, b;
		cin >> a >> b;
		--a, --b;
		road.unite(a, b);
	}
	for (long long i = 0; i < L; ++i) {
		long long a, b;
		cin >> a >> b;
		--a, --b;
		train.unite(a, b);
	}

	map<pair<long long, long long>, long long> num;
	for (long long i = 0; i < N; ++i) {
		long long road_root = road.root(i);
		long long train_root = train.root(i);
		++num[make_pair(road_root, train_root)];
	}
	for (long long i = 0; i < N; ++i) {
		long long road_root = road.root(i);
		long long train_root = train.root(i);
		cout << num[make_pair(road_root, train_root)] << " ";
	}
	cout << endl;
}