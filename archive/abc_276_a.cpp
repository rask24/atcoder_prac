#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	int key = -1;
	for (int i = 0; i < S.size(); ++i) {
		if (S[i] == 'a') {
			key = i + 1;
		}
	}
	cout << key << endl;
}