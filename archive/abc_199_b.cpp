#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }
template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	int N;
	cin >> N;
	int bmin = INF, amax = 0;
	for (int i = 0; i < N; ++i) {
		int a;
		cin >> a;
		chmax(amax, a);
	}
	for (int i = 0; i < N; ++i) {
		int b;
		cin >> b;
		chmin(bmin, b);
	}
	cout << ((bmin - amax + 1 > 0) ? bmin - amax + 1 : 0) << endl;
}