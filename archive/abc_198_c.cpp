#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long R, X, Y;
	cin >> R >> X >> Y;
	if (X * X + Y * Y < R * R) {
		cout << 2 << endl;
		return 0;
	}
	long long ans = 1;
	while (ans * ans * R * R < X * X + Y * Y)
		++ans;
	cout << ans << endl;
}