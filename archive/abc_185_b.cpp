#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, M, T;
	cin >> N >> M >> T;
	vector<long long> A(M), B(M);
	for (int i = 0; i < M; ++i)
		 cin >> A[i] >> B[i];
	long long L = N;
	bool neg = false;
	for (int i = 0; i < M; ++i) {
		L -= A[i] - ((i == 0) ? 0 : B[i - 1]);
		if (L <= 0)
			neg = true;
		L = min(N, L + B[i] - A[i]);
		if (i == M - 1)
			L -= T - B[i];
	}
	if (L <= 0)
		neg = true;
	cout << ((!neg) ? "Yes" : "No") << endl;
}