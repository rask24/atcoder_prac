#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	int ans = 0;
	for (int i = 0; i < S.size(); ++i) {
		while (i < S.size() - 1 && S[i] == S[i + 1]) {
			++i;
		}
		++ans;
	}
	cout << --ans << endl;
}