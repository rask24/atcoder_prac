#include <bits/stdc++.h>
using namespace std;

int main()
{
	int V, T, S, D;
	cin >> V >> T >> S >> D;
	cout << ((V * T <= D and D <= V * S) ? "No" : "Yes") << endl;
}