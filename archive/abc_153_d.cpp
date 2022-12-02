#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long H;
	cin >> H;
	long long ex = 1;
	long long ans = 0;
	while (H) {
		ans += ex;
		ex *= 2;
		H /= 2;
	}
	cout << ans << endl;
}