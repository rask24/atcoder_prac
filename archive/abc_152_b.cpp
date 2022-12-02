#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (b > a)
		swap(a, b);
	for (int i = 0; i < a; ++i)
		cout << b;
	cout << endl;
}