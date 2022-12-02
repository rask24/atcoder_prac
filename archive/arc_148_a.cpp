#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { return ((b == 0) ? a : gcd(b, a % b)); }

int main()
{
	int N;
	cin >> N;
	vector<long long> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	sort(A.begin(), A.end());
	bool eq = true;
	long long itv = A[1] - A[0];
	for (int i = 1; i < N - 1; ++i) {
		itv = gcd(itv, A[i + 1] - A[i]);
	}
	cout << ((itv == 1) ? 2 : 1) << endl;
}