#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

int main()
{
	vector<long long> X(6);
	for (int i = 0; i < 6; ++i) {
		cin >> X[i];
		X[i] %= MOD;
	}
	long long Y, Z;
	Y = (((X[0] * X[1]) % MOD) * X[2]) % MOD;
	Z = (((X[3] * X[4]) % MOD) * X[5]) % MOD;
	cout << (Y - Z + MOD) % MOD << endl;
}