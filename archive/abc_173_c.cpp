#include <bits/stdc++.h>
using namespace std;

long long H, W, K;

bool check(vector<vector<char>> c, vector<int> rows, vector<int> cols)
{
	for (int i = 0; i < rows.size(); ++i) {
		for (int j = 0; j < W; ++j) {
			c[rows[i]][j] = '@';
		}
	}
	for (int j = 0; j < cols.size(); ++j) {
		for (int i = 0; i < H; ++i) {
			c[i][cols[j]] = '@';
		}
	}
	long long cnt = 0;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			if (c[i][j] == '#')
				++cnt;
		}
	}
	return cnt == K;
}

int main()
{
	cin >> H >> W >> K;
	vector<vector<char>> c(H, vector<char> (W));
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cin >> c[i][j];
		}
	}

	long long ans = 0;
	for (long long rbit = 0; rbit < (1LL << H); ++rbit) {
		for (long long cbit = 0; cbit < (1LL << W); ++cbit) {
			vector<int> rows, cols;
			for (int i = 0; i < H; ++i) {
				if (rbit & (1LL << i))
					rows.push_back(i);
			}
			for (int j = 0; j < W; ++j) {
				if (cbit & (1LL << j))
					cols.push_back(j);
			}
			if (check(c, rows, cols))
				++ans;
		}
	}
	cout << ans << endl;
}