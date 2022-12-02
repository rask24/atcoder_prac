#include <bits/stdc++.h>
using namespace std;


int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> A(1 << N);
	for (int i = 0; i < (1 << N); ++i) {
		cin >> A[i].first;
		A[i].second = i + 1;
	}
	for (int i = 0; i < N - 1; ++i) {
		for (int j = 0; j < (1 << (N - i - 1)); ++j) {
			A[j] = (A[2 * j].first > A[2 * j + 1].first) ? A[2 * j] : A[2 * j + 1];
		}
	}
	cout << ((A[0].first < A[1].first) ? A[0].second : A[1].second) << endl;
}