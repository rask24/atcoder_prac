#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long A = 0, B = 0;
	vector<pair<long long, long long>> V(N);
	for (long long i = 0; i < N; ++i) {
		cin >> V[i].first >> V[i].second;
		A += V[i].first;
	}
	sort(V.begin(), V.end(), [](pair<long long, long long> a, pair<long long, long long> b){ return 2 * a.first + a.second > 2 * b.first + b.second; });

	long long ans = 0;
	for (long long i = 0; i <= N; ++i) {
		if (B > A or i == N) {
			ans = i;
			break;
		}
		A -= V[i].first;
		B += V[i].first + V[i].second;
	}
	cout << ans << endl;
}