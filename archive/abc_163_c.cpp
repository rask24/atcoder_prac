#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> B(N, 0);
	for (int i = 0; i < N - 1; ++i) {
		int a;
		cin >> a;
		++B[a - 1];
	}
	for (int i = 0; i < N; ++i) {
		cout << B[i] << endl;
	}
}