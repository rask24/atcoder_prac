#include <bits/stdc++.h>
using namespace std;

#define sq(a) ((a) * (a))

int main()
{
	long double N;
	cin >> N;
	long double x0, y0, xm, ym, xc, yc;
	cin >> x0 >> y0 >> xm >> ym;
	xc = (x0 + xm) / 2;
	yc = (y0 + ym) / 2;
	long double phi = 2 * M_PI / N;
	long double dx = x0 - xc, dy = y0 - yc;
	cout << fixed << setprecision(12) << xc + cos(phi) * dx - sin(phi) * dy << " " << yc + sin(phi) * dx + cos(phi) * dy << endl;
}