#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<char, int> m;
	string S;
	cin >> S;
	for (int i = 0; i < 3; ++i)
		++m[S[i]];
	for (auto i : m) {
		if (i.second == 1) {
			cout << i.first << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}