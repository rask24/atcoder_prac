#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { return ((b == 0) ? a : gcd(b, a % b)); }

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	cout << ((C % gcd(A, B) == 0) ? "YES" : "NO") << endl;
}