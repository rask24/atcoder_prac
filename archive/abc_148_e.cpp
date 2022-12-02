#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	if (N % 2 == 1) {
		cout << 0 << endl;
		return 0;
	}
	long long ans = 0, ex = 5;
	N /= 2;
	while (N / ex) {
		ans += N / ex;
		ex *= 5;
	}
	cout << ans << endl;
}