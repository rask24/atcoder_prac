#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, M, T;
	cin >> N >> M >> T;
	vector<long long> A(N - 1);
	for (long long i = 0; i < N - 1; ++i)
		cin >> A[i];
	vector<long long> X(M), Y(M);
	for (long long i = 0; i < M; ++i) {
		cin >> X[i] >> Y[i];
		--X[i];
	}
	long long j = 0;
	for (long long i = 0; i < N - 1; ++i) {
		if (M != 0 and X[j] == i) {
			T += Y[j];
			++j;
		}
		if (T - A[i] <= 0) {
			cout << "No" << endl;
			return 0;
		}
		T -= A[i];
	}
	cout << "Yes" << endl;
}