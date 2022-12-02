#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { return ((b == 0) ? a : gcd(b, a % b)); }

int main()
{
	long long A, B, C;
	cin >> A >> B >> C;
	long long G = gcd(A, gcd(B, C));
	cout << A / G + B / G + C / G - 3 << endl;
}