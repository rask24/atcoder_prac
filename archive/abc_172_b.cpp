#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S, T;
	cin >> S >> T;
	long long ans = 0;
	for (int i = 0; i < S.size(); ++i) {
		ans += S[i] != T[i];
	}
	cout << ans << endl;
}