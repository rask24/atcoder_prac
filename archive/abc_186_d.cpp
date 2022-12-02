#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<long long> A(N);
	for (long long i = 0; i < N; ++i)
		cin >> A[i];
	sort(A.begin(), A.end());
	long long S = 0;
	for (long long i = 0; i < N; ++i)
		S += A[i] - A[0];
	long long ans = S;
	for (long long i = 1; i < N; ++i) {
		S += (2 * i - N) * (A[i] - A[i - 1]);
		ans += S;
	}
	cout << ans / 2 << endl;
}