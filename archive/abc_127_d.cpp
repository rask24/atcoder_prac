#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	long long T, U;
	map<long long, long long> m;
	for (int i = 0; i < N; ++i) {
		cin >> T;
		++m[T];
	}
	for (int i = 0; i < M; ++i) {
		cin >> T >> U;
		m[U] += T;
	}
	long long ans = 0, cnt = 0;
	for (auto iter = m.rbegin(); iter != m.rend(); ++iter) {
		long long key = iter->first;
		long long val = iter->second;
		if (cnt + val < N) {
			ans += key * val;
			cnt += val;
		} else {
			ans += key * (N - cnt);
			break;
		}
	}
	cout << ans << endl;
}