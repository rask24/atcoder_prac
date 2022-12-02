#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, M;
	cin >> N >> M;
	vector<long long> A(N), S(N + 1, 0), T(N + 2, 0);
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		S[i + 1] = S[i] + A[i];
		T[i + 1] = T[i] + S[i];
	}
	T[N + 1] = T[N] + S[N];
	long long ans = -1000000000000000000LL;
	for (int i = 0; i <= N - M; ++i) {
		ans = max(ans, M * S[i + M] - (T[i + M] - T[i]));
	}
	cout << ans << endl;
}
