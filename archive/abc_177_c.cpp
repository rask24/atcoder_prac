#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
	long long N;
	cin >> N;
	vector<long long> A(N), S(N + 1, 0);
	for (long long i = 0; i < N; ++i) {
		cin >> A[i];
		S[i + 1] = S[i] + A[i];
	}
	long long ans = 0;
	for (long long i = 0; i < N - 1; ++i) {
		ans += A[i] * ((S[N] - S[i + 1]) % MOD);
		ans %= MOD;
	}
	cout << ans << endl;
}