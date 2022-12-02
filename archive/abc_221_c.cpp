#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;

	sort(S.begin(), S.end());
	long long ans = 0;
	do {
		string T1, T2;
		for (long long i = 0; i < S.size() / 2; ++i) {
			T1 = S.substr(0, i + 1);
			T2 = S.substr(i + 1, S.size() - i);
			if (T1[0] == '0' || T2[0] == '0')
				continue;
			ans = max(ans, stoll(T1) * stoll(T2));
		}
	} while (next_permutation(S.begin(), S.end()));
	cout << ans << endl;
}