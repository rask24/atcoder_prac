#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	string T = S.substr(0, 2);
	string U = S.substr(2, 2);
	if (0 < stoi(T) && stoi(T) < 13 && 0 < stoi(U) && stoi(U) < 13) {
		cout << "AMBIGUOUS" << endl;
	} else if (0 < stoi(T) && stoi(T) < 13) {
		cout << "MMYY" << endl;
	} else if (0 < stoi(U) && stoi(U) < 13) {
		cout << "YYMM" << endl;
	} else {
		cout << "NA" << endl;
	}
}