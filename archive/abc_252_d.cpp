#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<long long> A(N);
	unordered_map<long long, long long> m;
	for (int i = 0; i < N; ++i) {
		long long A;
		cin >> A;
		++m[A];
	}
	long long ans = N * (N - 1) * (N - 2) / 6;
	for (auto [f, s] : m) {
		if (s > 2) {
			ans -= s * (s - 1) * (s - 2) / 6;
		}
		if (s > 1) {
			ans -= s * (s - 1) / 2 * (N - s);
		}
	}
	cout << ans << endl;
}