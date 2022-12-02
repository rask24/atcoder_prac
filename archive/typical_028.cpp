#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int>> field(1001, vector<int> (1001, 0));
	for (int i = 0; i < N; ++i) {
		int lx, ly, rx, ry;
		cin >> lx >> ly >> rx >> ry;
		++field[lx][ly];
		++field[rx][ry];
		--field[lx][ry];
		--field[rx][ly];
	}
	for (int i = 0; i <= 1000; ++i) {
		for (int j = 0; j < 1000; ++j) {
			field[i][j + 1] += field[i][j];
		}
	}
	for (int i = 0; i < 1000; ++i) {
		for (int j = 0; j <= 1000; ++j) {
			field[i + 1][j] += field[i][j];
		}
	}

	vector<int> ol(N, 0);
	for (int i = 0; i <= 1000; ++i) {
		for (int j = 0; j <= 1000; ++j) {
			if (field[i][j] != 0)
				++ol[field[i][j] - 1];
		}
	}
	for (int i = 0; i < N; ++i) {
		cout << ol[i] << endl;
	}
}