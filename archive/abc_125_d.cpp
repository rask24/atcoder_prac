#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }

int main()
{
	long long N, val = 1e10, cnt = 0, S = 0;
	cin >> N;
	vector<long long> A(N);
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		if (A[i] < 0)
			++cnt;
		chmin(val, abs(A[i]));
		S += abs(A[i]);
	}
	cout << ((cnt % 2 == 0) ? S : S - 2 * val) << endl;
}