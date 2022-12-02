#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

vector<long long> fact_inv, inv, com;

void init_comb(int N, int K)
{
	fact_inv.resize(K + 1);
	inv.resize(K + 1);
	fact_inv[0] = fact_inv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < K + 1; ++i) {
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		fact_inv[i] = fact_inv[i - 1] * inv[i] % MOD;
	}
	com.resize(K + 1);
	com[0] = 1;
	for (int i = 1; i < K + 1; i++) {
		com[i] = com[i - 1] * ((N - i + 1) * inv[i] % MOD) % MOD;
	}
}

long long comb(int k)
{
	assert(!(k < 0));
	return com[k];
}

long long mod_pow(long long x, long long n)
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
	long long n, a, b;
	cin >> n >> a >> b;
	init_comb(n, b);
	cout << (MOD + mod_pow(2, n) - 1 - comb(a) - comb(b) + MOD) % MOD << endl;
}