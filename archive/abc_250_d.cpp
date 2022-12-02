#include <bits/stdc++.h>
using namespace std;

vector<bool> Eratosthenes(long long N)
{
	vector<bool> ip(N + 1, true);
	ip[0] = ip[1] = false;
	for (long long p = 2; p <= N; ++p) {
		if (!ip[p])
			continue;
		for (long long q = p * 2; q <= N; q += p) {
			ip[q] = false;
		}
	}
	return ip;
}

int main()
{
	long long N;
	cin >> N;
	const vector<bool> &ip = Eratosthenes(1000000);
	vector<long long> S(1000000 + 1);
	for (long long i = 0; i < 1000000; ++i) {
		S[i + 1] = S[i] + ip[i];
	}
	long long ans = 0;
	for (long long q = 1; q * q * q <= N; ++q) {
		if (!ip[q])
			continue;
		ans += S[min(N / (q * q * q), q - 1) + 1];
	}
	cout << ans << endl;
}