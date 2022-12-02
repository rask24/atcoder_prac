#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	long long N, M, K, A, B;
	cin >> N >> M >> K;
	vector<long long> SA(N + 1, 0), SB(M + 1, 0);
	for (long long i = 0; i < N; ++i) {
		cin >> A;
		SA[i + 1] = SA[i] + A;
	}
	for (long long i = 0; i < M; ++i) {
		cin >> B;
		SB[i + 1] = SB[i] + B;
	}
	
	long long ans = 0;
	for (long long i = 0; i <= N; ++i) {
		if (SA[i] > K)
			break;
		long long j = upper_bound(SB.begin(), SB.end(), K - SA[i]) - SB.begin() - 1;
		chmax(ans, i + j);
	}
	cout << ans << endl;
}