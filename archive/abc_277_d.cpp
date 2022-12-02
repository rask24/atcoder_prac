#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	long long N, M, ans = 0;
	cin >> N >> M;
	map<long long, long long> m;
	for (int i = 0; i < N; ++i) {
		int A;
		cin >> A;
		ans += A;
		++m[A], ++m[A + M];
	}

	long long pre = -1, cnt = 0, tmp = 0, sum = 0;
	for (auto [key, val] : m) {
		if (cnt < M && pre + 1 == key) {
			tmp += (key % M) * val;
			++cnt;
		} else {
			chmax(sum, tmp);
			cnt = 0;
			tmp = (key % M) * val;
		}
		pre = key;
	}
	ans -= sum;
	cout << ans << endl;
}