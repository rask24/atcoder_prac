#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B, X;
	cin >> A >> B >> X;
	cout << ((A <= X and X <= A + B) ? "YES" : "NO") << endl;
}