#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }

int main()
{
	long long n;
	cin >> n;
	vector<long long> a(n);
	for (long long i = 0; i < n; ++i)
		cin >> a[i];
	sort(a.begin(), a.end());
	long long r = INF, l = INF;
	long long er = INF, el = INF;
	for (long long i = 0; i < n; ++i) {
		if (chmin(er, abs(a.back() / 2 + 1 - a[i])))
			r = a[i];
		if (chmin(el, abs(a.back() / 2 - a[i])))
			l = a[i];
	}
	if (a.back() / 2 % 2 == 1) {
		if (er < el)
			l = r;
	}
	cout << a.back() << " " << l << endl;
}