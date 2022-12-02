#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a, b;
	cin >> a >> b;
	if (a == 'D')
		b = (b == 'H') ? 'D' : 'H';
	cout << b << endl;
}