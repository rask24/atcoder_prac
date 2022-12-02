#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	N *= 2;
	long long ans = 0;
	for (long long i = 1; i * i <= N; ++i) {
		if (N % i)
			continue;
		if (((N / i) - i + 1) % 2 == 0)
			ans += 2;
	}
	cout << ans << endl;
}