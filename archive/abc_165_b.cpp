#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long X;
	cin >> X;
	long long M = 100;
	int ans = 0;
	while (M < X) {
		M = M + M / 100;
		++ans;
	}
	cout << ans << endl;
}