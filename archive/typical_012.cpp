#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};

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
	int H, W, Q;
	cin >> H >> W >> Q;
	vector<vector<bool>> field(H, vector<bool> (W, false));
	UnionFind uf(H * W);
	while (Q--) {
		int t, r, c, ra, ca, rb, cb;
		cin >> t;
		if (t == 1) {
			cin >> r >> c;
			--r, --c;
			field[r][c] = true;
			for (int i = 0; i < 4; ++i) {
				if (r + dx[i] < 0 || H <= r + dx[i] || c + dy[i] < 0 || W <= c + dy[i])
					continue;
				if (field[r + dx[i]][c + dy[i]]) {
					uf.unite(r * W + c, (r + dx[i]) * W + (c + dy[i]));
				}
			}
		} else {
			cin >> ra >> ca >> rb >> cb;
			--ra, --ca, --rb, --cb;
			if (field[ra][ca] && field[rb][cb] && uf.issame(ra * W + ca, rb * W + cb))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
}