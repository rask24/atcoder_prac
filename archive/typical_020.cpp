#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	long long t = 1;
	for (int i = 0; i < b; ++i)
		t *= c;
	cout << ((a < t) ? "Yes" : "No") << endl;
}