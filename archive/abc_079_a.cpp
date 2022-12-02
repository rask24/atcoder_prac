#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string S;
	cin >> S;
	cout << (((S[0] == S[1] and S[1] == S[2]) or (S[1] == S[2] and S[2] == S[3])) ? "Yes" : "No") << endl;
}