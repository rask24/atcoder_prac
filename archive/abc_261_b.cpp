#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<char>> A(N, vector<char> (N));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			if ((A[i][j] == 'W' and A[j][i] != 'L')
			or (A[i][j] == 'L' and A[j][i] != 'W')
			or (A[i][j] == 'D' and A[j][i] != 'D')) {
				cout << "incorrect" << endl;
				return 0;
			}
		}
	}
	cout << "correct" << endl;
}