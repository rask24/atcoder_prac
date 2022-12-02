#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }

int main()
{
	long long N, X;
	cin >> N >> X;
	vector<long long> A(N), B(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i] >> B[i];
	vector<long long> T(N, A[0] + B[0]);
	for (int i = 1; i < N; ++i) {
		T[i] = T[i - 1] + A[i] + B[i];
	}

	long long ans = INF;
	for (int i = 0; i < min(X, N); ++i) {
		chmin(ans, T[i] + B[i] * (X - i - 1));
	}
	cout << ans << endl;
}