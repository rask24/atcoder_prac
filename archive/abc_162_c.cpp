#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { return ((b == 0) ? a : gcd(b, a % b)); }

int main()
{
	int K;
	cin >> K;
	long long ans = 0;
	for (int a = 1; a <= K; ++a) {
		for (int b = 1; b <= K; ++b) {
			for (int c = 1; c <= K; ++c) {
				ans += gcd(a, gcd(b, c));
			}
		}
	}
	cout << ans << endl;
}