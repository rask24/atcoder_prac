#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<long long> A(N, 0), B(N, 0);
	for (int i = 0; i < N; ++i) {
		int C, P;
		cin >> C >> P;
		if (C == 1)
			A[i] = P;
		else
			B[i] = P;
	}
	vector<long long> SA(N + 1, 0), SB(N + 1, 0);
	for (int i = 0; i < N; ++i) {
		SA[i + 1] = SA[i] + A[i];
		SB[i + 1] = SB[i] + B[i];
	}

	int Q;
	cin >> Q;
	while (Q--) {
		int L, R;
		cin >> L >> R;
		cout << SA[R] - SA[L - 1] << " " << SB[R] - SB[L - 1] << endl;
	}
}