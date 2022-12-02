#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	int c = 0;
	if (S == "RRR")
		c = 3;
	else if (S.substr(0, 2) == "RR" or S.substr(1, 2) == "RR")
		c = 2;
	else if (S.find('R') != string::npos)
		c = 1;
	cout << c << endl;
}