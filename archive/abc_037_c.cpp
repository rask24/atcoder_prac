#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<long long> A(N), S(N + 1, 0);
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		S[i + 1] = S[i] + A[i];
	}
	long long ans = 0;
	for (int i = 0; i < N - K + 1; ++i) {
		ans += S[i + K] - S[i];
	}
	cout << ans << endl;
}