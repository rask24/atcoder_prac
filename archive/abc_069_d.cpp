#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W, N;
	cin >> H >> W >> N;
	vector<int> A(N), S(N + 1, 0);
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		S[i + 1] = S[i] + A[i];
	}
	vector<vector<int>> field(H, vector<int> (W, 0));
	int cnt = 0, p = 1;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			int key = (i % 2 == 0) ? j : W - j - 1;
			field[i][key] = p;
			++cnt;
			if (S[p] <= cnt)
				++p;
		}
	}

	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
}