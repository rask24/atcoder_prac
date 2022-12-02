#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long mpow(long long x, long long n)
{
	long long ret = 1;
	while (n > 0) {
		if (n & 1)
			ret = ret * x % MOD;
		x = x * x % MOD;
		n >>= 1;
	}
	return ret;
}

int main()
{
	long long N;
	cin >> N;
	map<long long, long long> m;
	for (long long i = 0; i < N; ++i) {
		long long D;
		cin >> D;
		if (i == 0 && D != 0) {
			cout << 0 << endl;
			return 0;
		}
		++m[D];
	}
	long long ans = 1;
	long long lev = 0;
	long long p = 1;
	for (auto [f, s] : m) {
		if ((lev == 0 && s != 1) || lev != f) {
			cout << 0 << endl;
			return 0;
		}
		ans *= mpow(p, s);
		ans %= MOD;
		p = s;
		++lev;
	}
	cout << ans << endl;
}