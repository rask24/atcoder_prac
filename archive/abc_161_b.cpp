#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M, S;
	cin >> N >> M;
	vector<int> A(N);
	S = 0;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		S += A[i];
	}
	sort(A.begin(), A.end(), greater<>());
	cout << ((A[M - 1] * 4 * M < S) ? "No" : "Yes") << endl;
}