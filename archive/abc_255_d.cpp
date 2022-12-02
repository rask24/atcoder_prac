#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, Q;
	cin >> N >> Q;
	vector<long long> A(N), S(N + 1, 0);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	sort(A.begin(), A.end());
	for (int i = 0; i < N; ++i)
		S[i + 1] = S[i] + A[i];
	while (Q--) {
		long long X;
		cin >> X;
		long long k = lower_bound(A.begin(), A.end(), X) - A.begin();
		cout << (X * k - S[k]) + ((S[N] - S[k]) - X * (N - k)) << endl;
	}
}