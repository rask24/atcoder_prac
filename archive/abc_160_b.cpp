#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long X;
	cin >> X;
	cout << (X / 500) * 1000 + (X - X / 500 * 500) / 5 * 5 << endl;
}