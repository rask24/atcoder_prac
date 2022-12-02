#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, T;
	cin >> N >> T;
	vector<long long> t(N);
	for (int i = 0; i < N; ++i)
		cin >> t[i];
	long long ans = 0;
	long long head = 0, tail = T;
	for (int i = 0; i < N; ++i) {
		if (tail < t[i]) {
			ans += tail - head;
			head = t[i];
		}
		tail = t[i] + T;
	}
	ans += tail - head;
	cout << ans << endl;
}