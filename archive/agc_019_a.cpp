#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long N;
	vector<pair<long long, long long>> v(4);
	for (int i = 0; i < 4; ++i)
	{
		cin >> v[i].first;
		v[i].second = i;
	}
	cin >> N;
	v[0].first *= 8;
	v[1].first *= 4;
	v[2].first *= 2;
	sort(v.begin(), v.end());
	long long ans = N / 2 * v[0].first;
	if (N % 2 == 1)
		ans += (v[0].second == 3) ? v[1].first / 2 : v[0].first / 2;
	cout << ans << endl;
}