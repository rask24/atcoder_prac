#include <bits/stdc++.h>
using namespace std;

int main()
{
	long double a, b, x;
	cin >> a >> b >> x;
	if (x / (a * a) > b / 2)
		cout << fixed << setprecision(12) << atan(2 * (b - x / (a * a)) / a) / (2 * M_PI) * 360 << endl;
	else
		cout << fixed << setprecision(12) << atan((a * b * b) / (2 * x)) / (2 * M_PI) * 360 << endl;
}