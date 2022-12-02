#include <bits/stdc++.h>
using namespace std;

#define sq(a) ((a) * (a))

int main()
{
	long double T, L, X, Y, Q;
	cin >> T >> L >> X >> Y >> Q;
	while (Q--) {
		int E;
		cin >> E;
		long double phi = E * 2 * M_PI / T;
		long double L1 = sq(X) + sq(sin(phi) * L / 2 + Y) + sq(L / 2 * (1 - cos(phi)));
		long double L2 = sq(X) + sq(sin(phi) * L / 2 + Y);
		cout << fixed << setprecision(20) << acos(sqrt(L2) / sqrt(L1)) / (2 * M_PI) * 360 << endl;
	}
}