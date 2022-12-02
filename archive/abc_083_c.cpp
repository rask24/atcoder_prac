#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long X, Y;
	cin >> X >> Y;
	int ans = 0;
	while (X <= Y)
	{
		++ans;
		X *= 2;
	}
	cout << ans << endl;
}