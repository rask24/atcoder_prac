#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, K;
	cin >> N >> K;
	vector<pair<long long, long long>> P(N);
	for (int i = 0; i < N; ++i)
		cin >> P[i].first >> P[i].second;
	sort(P.begin(), P.end());

	long long ans = 0;
	for (int i = 0; i < N; ++i) {
		if (K - (P[i].first - ans) < 0) {
			ans += K;
			K = 0;
			break;
		} else {
			ans += P[i].first;
			K += P[i].second - P[i].first;
		}
	}
	if (K)
		ans += K;
	cout << ans << endl;
}