#include <bits/stdc++.h>
using namespace std;

int main()
{
	string X;
	cin >> X;
	for (int i = 0; i < X.size() and X[i] != '.'; ++i)
		cout << X[i];
	cout << endl;
}