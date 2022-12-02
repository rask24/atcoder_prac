#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;
template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }

int main()
{
	long long N;
	cin >> N;
	vector<long long> A(N), P(N), X(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i] >> P[i] >> X[i];
	long long ans = INF;
	for (int i = 0; i < N; ++i) {
		if (X[i] - A[i] > 0)
			chmin(ans, P[i]);
	}
	cout << ((ans == INF) ? -1 : ans) << endl;
}