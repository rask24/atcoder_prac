#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	vector<int> B(N);
	for (int i = 0; i < N; ++i)
		cin >> B[i];
	int E = 0;
	for (int i = 0; i < N; ++i) {
		E += abs(A[i] - B[i]);
	}
	if (E > K || ((E <= K) && (K - E) % 2 == 1))
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}