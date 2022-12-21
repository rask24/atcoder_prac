#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S, T;
	cin >> S >> T;
	cout << ((S.find(T) == string::npos) ? "No" : "Yes") << endl;
}