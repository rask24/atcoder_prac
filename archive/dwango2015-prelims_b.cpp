#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	vector<int> v;
	for (int i = 0; i + 1 < S.size(); ++i) {
		if (S[i] == '2' && S[i + 1] == '5') {
			v.push_back(1);
			++i;
		} else {
			v.push_back(0);
		}
	}
	long long ans = 0;
	for (int i = 0; i < v.size();) {
		long long cnt = 0;
		while (v[i]) {
			++cnt;
			++i;
		}
		if (!cnt)
			++i;
		ans += cnt * (cnt + 1) / 2;
	}
	cout << ans << endl;
}