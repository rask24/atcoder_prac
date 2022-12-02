#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long L, R;
	cin >> L >> R;
	vector<long long> m;
	for (int i = L; i <= min(R, L + 2018); ++i) {
		m.push_back(i % 2019);
	}
	long long ans = 10000000;
	for (int i = 0; i < m.size(); ++i) {
		for (int j = i + 1; j < m.size(); ++j) {
			ans = min(ans, m[i] * m[j] % 2019);
		}
	}
	cout << ans << endl;
}