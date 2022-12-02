#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { return ((b == 0) ? a : gcd(b, a % b)); }

int main()
{
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	int g = a[0];
	for (int i = 1; i < N; ++i)
		g = gcd(g, a[i]);
	for (int i = 0; i < N; ++i)
		a[i] /= g;
	
	int ans = 0;
	for (int i = 0; i < N; ++i) {
		while (a[i] % 2 == 0) {
			++ans;
			a[i] /= 2;
		}
		while (a[i] % 3 == 0) {
			++ans;
			a[i] /= 3;
		}
	}
	for (int i = 1; i < N; ++i) {
		if (a[i - 1] != a[i]) {
			cout << -1 << endl;
			return 0;
		}
	}
	cout << ans << endl;
}