#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	int N;
	cin >> N;
	vector<int> c(1e5, 0);
	for (int i = 0; i < N; ++i) {
		int a;
		cin >> a;
		++c[a];
	}
	long long ans = 0;
	for (int i = 0; i < 1e5; ++i) {
		long long sum = 0;
		if (i > 0 and c[i - 1])
			sum += c[i - 1];
		sum += c[i];
		if (i < 1e5 - 1 and c[i + 1])
			sum += c[i + 1];
		chmax(ans, sum);
	}
	cout << ans << endl;
}