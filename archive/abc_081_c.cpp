#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, K;
	cin >> N >> K;
	map<long long, long long> m;
	while (N--) {
		int a;
		cin >> a;
		++m[a];
	}
	vector<pair<long long, long long>> v;
	for (auto i : m) {
		v.push_back(make_pair(i.first, i.second));
	}
	sort(v.begin(), v.end(), [](pair<long long, long long> a, pair<long long, long long> b){ return a.second < b.second; });
	long long ans = 0;
	for (int i = 0; K + i < v.size(); ++i) {
		cerr << "=+++++" << endl;
		ans += v[i].second;
	}
	cout << ans << endl;
}