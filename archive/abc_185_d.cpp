#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

int main()
{
	long long N, M;
	cin >> N >> M;
	vector<long long> A(M);
	for (long long i = 0; i < M; ++i)
		cin >> A[i];
	A.push_back(0);
	A.push_back(N + 1);
	sort(A.begin(), A.end());
	long long mi = INF;
	for (long long i = 0; i < M + 1; ++i) {
		if (A[i + 1] - A[i] == 1)
			continue;
		mi = min(mi, A[i + 1] - A[i] - 1);
	}
	long long ans = 0;
	for (long long i = 0; i < M + 1; ++i) {
		if (A[i + 1] - A[i] == 1)
			continue;
		ans += (A[i + 1] - A[i] + mi - 2) / mi;
		mi = min(mi, A[i + 1] - A[i] - 1);
	}
	cout << ans << endl;
}