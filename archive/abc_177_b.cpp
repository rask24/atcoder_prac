#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main()
{
	string S, T;
	cin >> S >> T;
	long long ans = S.size();
	for (int i = 0; i < S.size() - T.size() + 1; ++i) {
		long long cnt = 0;
		for (int j = 0; j < T.size(); ++j) {
			if (S[i + j] != T[j])
				++cnt;
		}
		ans = min(ans, cnt);
	}
	cout << ans << endl;
}