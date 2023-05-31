#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	for (auto i : S)
		cout << ((i == '0' ? '1' : '0'));
	cout << endl;
}