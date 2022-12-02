#include <bits/stdc++.h>
using namespace std;

// 2 * m * (m^k-1 - 1) / m - 1

int main()
{
	long long a, b, c, k;
	cin >> a >> b >> c >> k;
	long long m = max({a, b, c});
	long long t = m;
	while (k--) {
		m *= 2;
	}
	cout << a + b + c + m - t << endl;
}