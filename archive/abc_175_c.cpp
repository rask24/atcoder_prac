#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long X, K, D;
	cin >> X >> K >> D;
	if (X < 0)
		X *= -1;
	if (X / D >= K) {
		cout << X - K * D << endl;
	} else if ((K - X / D) % 2 == 0) {
		cout << X - (X / D) * D << endl;
	} else if ((K - X / D) % 2 == 1) {
		cout << abs(X - ((X / D)+ 1) * D) << endl;
	}
}