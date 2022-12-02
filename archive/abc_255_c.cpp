#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long X, A, D, N;
	cin >> X >> A >> D >> N;
	X -= A;
	if (D == 0) {
		cout << abs(X) << endl;
		return 0;
	}
	if (D < 0) {
		D *= -1;
		X *= -1;
	}
	if (X < 0)
		cout << abs(X) << endl;
	else if ((N - 1) * D < X)
		cout << X - ((N - 1) * D) << endl;
	else
		cout << min(X - (X / D * D), ((X / D + 1) * D) - X) << endl;
}