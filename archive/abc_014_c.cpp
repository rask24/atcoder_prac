#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	int N;
	cin >> N;
	vector<int> A(N), B(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i] >> B[i];
	vector<int> T(1000002, 0);
	for (int i = 0; i < N; ++i) {
		++T[A[i]];
		--T[B[i] + 1];
	}
	for (int i = 0; i <= 1000001; ++i) {
		T[i + 1] += T[i];
	}
	int ans = 0;
	for (int i = 0; i <= 1000001; ++i) {
		chmax(ans, T[i]);
	}
	cout << ans << endl;
}