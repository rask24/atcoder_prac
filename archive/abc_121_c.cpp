#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long N, M;
	cin >> N >> M;
	vector<pair<long long, long long>> P(N);
	for (long long i = 0; i < N; ++i)
		cin >> P[i].first >> P[i].second;
	sort(P.begin(), P.end());
	long long ans = 0;
	for (long long i = 0; i < N; ++i)
	{
		ans += P[i].first * min(P[i].second, M);
		M -= P[i].second;
		if (M < 0)
			break;
	}
	cout << ans << endl;
}