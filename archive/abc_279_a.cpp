#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	int ans = 0;
	for (int i = 0; i < S.size(); ++i) {
		ans += (S[i] == 'v') ? 1 : 2;
	}
	cout << ans << endl;
}