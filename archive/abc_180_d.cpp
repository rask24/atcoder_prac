#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long X, Y, A, B;
	cin >> X >> Y >> A >> B;
	long long C = B / (A - 1);
	long long ans = 0;
	while (X < min(Y, C) / A + min(Y, C) % A) {
		X *= A;
		++ans;
	}
	ans += (Y - X - 1) / B;
	cout << ans << endl;
}