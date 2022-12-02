#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long S = 0, Q = 0;
	for (int i = 0; i < N; ++i) {
		long long a;
		cin >> a;
		S += a;
		Q += a * a;
	}
	cout << N * Q - S * S << endl;
}