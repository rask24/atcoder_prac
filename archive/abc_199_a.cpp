#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	cout << ((A * A + B * B < C * C) ? "Yes" : "No") << endl;
}