#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long a, b, c;
	cin >> a >> b >> c;
	cout << ((a % 2 and b % 2 and c % 2) ? min({a * b, b * c, c * a}) : 0) << endl;
}