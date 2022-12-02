#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }

int main()
{
	int X, N;
	cin >> X >> N;
	vector<bool> b(101, false);
	for (int i = 0; i < N; ++i) {
		int p;
		cin >> p;
		b[p] = true;
	}
	int diff = 1000000;
	int ans = -1;
	for (int i = 0; i <= 101; ++i) {
		if (b[i])
			continue;
		if (chmin(diff, abs(X - i)))
			ans = i;
	}
	cout << ans << endl;
}