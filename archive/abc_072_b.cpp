#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	for (int i = 0; i < S.size(); i += 2)
		cout << S[i];
	cout << endl;
}