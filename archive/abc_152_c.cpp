#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }

int main()
{
	long long N;
	cin >> N;
	vector<long long> P(N);
	for (int i = 0; i < N; ++i)
		cin >> P[i];
	long long ans = 1, m = P[0];
	for (int i = 1; i < N; ++i) {
		if (chmin(m, P[i]))
			++ans;
	}
	cout << ans << endl;
}