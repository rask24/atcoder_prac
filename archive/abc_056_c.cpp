#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long X;
	cin >> X;
	long long ans = 1;
	while (ans * (ans + 1) / 2 < X)
		++ans;
	cout << ans << endl;
}