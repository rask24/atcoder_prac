#include <bits/stdc++.h>
using namespace std;

bool is_rot(string S)
{
	string T = S;
	reverse(T.begin(), T.end());
	return S == T;
}

int main()
{
	string S, T1, T2;
	cin >> S;
	T1 = S.substr(0, (S.size() - 1) / 2);
	T2 = S.substr((S.size() + 1) / 2, (S.size() - 1) / 2);
	cout << ((is_rot(S) and is_rot(T1) and is_rot(T2)) ? "Yes" : "No") << endl;
}