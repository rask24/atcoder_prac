#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<vector<int>> X(M);
	vector<vector<bool>> exist(N, vector<bool> (N, false));
	for (int i = 0; i < M; ++i) {
		int k;
		cin >> k;
		X[i].resize(k);
		for (int j = 0; j < k; ++j) {
			cin >> X[i][j];
			--X[i][j];
		}
	}
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < X[i].size(); ++j) {
			for (int k = j + 1; k < X[i].size(); ++k) {
				exist[j][k] = true;
			}
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			cout << exist[i][j] << " ";
			if (!exist[i][j]) {
				cout << "No" << endl;
				return 0;
			}
		}
		cout << "" << endl;
	}
	cout << "Yes" << endl;
}