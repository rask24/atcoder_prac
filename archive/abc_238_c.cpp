#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

const long long MOD = 998244353LL;

long long mod_pow(long long x, long long n)
{
	x %= MOD;
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	if (n % 2)
		return x * mod_pow(x, n - 1) % MOD;
	long long tmp = mod_pow(x, n / 2);
	return (tmp * tmp) % MOD;
}

long long digit(long long n)
{
	long long d = 0;
	while (n)
	{
		++d;
		n /= 10;
	}
	return d;
}

long long sum(long long to)
{
	return to * (to + 1) % MOD * mod_pow(2, MOD - 2) % MOD;
}

int main(void)
{
	long long N;
	cin >> N;
	long long p = 9;
	long long ans = 0;
	long long d = digit(N);
	for (long long i = 0; i < d - 1; ++i)
	{
		ans = (ans + sum(p)) % MOD;
		p = p * 10 % MOD;
	}
	ans = (ans + sum((N - mod_pow(10, d - 1) + MOD + 1) % MOD)) % MOD;
	cout << ans << endl;
}