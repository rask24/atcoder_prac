#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main(void)
{
	long long N, p;
	cin >> N;
	p = 1;
	for (int i = 1; i <= N; ++i)
		p = p * i % MOD;
	cout << p << endl;
}