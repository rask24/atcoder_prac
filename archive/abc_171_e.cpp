#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> a(N);
	int s = 0;
	for (int i = 0; i < N; ++i) {
		cin >> a[i];
		s ^= a[i];
	}
	for (int i = 0; i < N; ++i) {
		cout << (s ^ a[i]) << " ";
	}
	cout << endl;
}