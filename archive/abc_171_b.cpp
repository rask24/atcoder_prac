#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, K;
	cin >> N >> K;
	vector<long long> p(N);
	for (int i = 0; i < N; ++i)
		cin >> p[i];
	sort(p.begin(), p.end());
	long long ans = 0;
	for (int i = 0; i < K; ++i) {
		ans += p[i];
	}
	cout << ans << endl;
}