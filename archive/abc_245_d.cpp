#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N + 1), C(N + M + 1);
	for (int i = 0; i < N + 1; ++i)
		cin >> A[i];
	for (int i = 0; i < N + M + 1; ++i)
		cin >> C[i];

	vector<int> B(M + 1);
	for (int i = M + N; i >= N; --i)
	{
		int piv = C[i] / A[N];
		for (int j = 0; j < N + 1; ++j)
			C[i - j] -= A[N - j] * piv;
		B[i - N] = piv;
	}
	for (int i = 0; i < M + 1; ++i)
		cout << B[i] << " ";
	cout << endl;
}