#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<pair<long long, long long>> p(N);
	for (long long i = 0; i < N; ++i) {
		cin >> p[i].second >> p[i].first;
	}
	sort(p.begin(), p.end());
	long long T = 0;
	for (long long i = 0; i < N; ++i) {
		if (T + p[i].second <= p[i].first) {
			T += p[i].second;
		} else {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}