#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { return ((b == 0) ? a : gcd(b, a % b)); }
long long lcm(long long a, long long b){ return (a * b) / gcd(a, b); }

int main()
{
	long long A, B, C, D;
	cin >> A >> B >> C >> D;
	long long ans = B - ((B / C) + (B / D) - (B / lcm(C, D)));
	ans -= (A - 1) - (((A - 1) / C) + ((A - 1) / D) - ((A - 1) / lcm(C, D)));
	cout << ans << endl;
}