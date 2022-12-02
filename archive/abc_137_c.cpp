#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	unordered_map<string, long long> m;
	for (int i = 0; i < N; ++i) {
		string S;
		cin >> S;
		sort(S.begin(), S.end());
		++m[S];
	}
	long long ans = 0;
	for (auto s : m) {
		ans += s.second * (s.second - 1) / 2;
	}
	cout << ans << endl;
}