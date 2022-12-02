#include <bits/stdc++.h>
using namespace std;

int digit(long long N)
{
	int ret = 0;
	while (N) {
		++ret;
		N /= 10;
	}
	return ret;
}

int main()
{
	long long N;
	cin >> N;
	long long d = digit(N);
	long long ans = 0;
	long long K = 9, T = 1;
	for (int i = 1; i < d; ++i, K *= 10, T *= 10) {
		ans += K * ((i - 1) / 3);
	}
	ans += (N - T + 1) * ((d - 1) / 3);
	cout << ans << endl;
}	