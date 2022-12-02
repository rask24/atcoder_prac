#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, X, Y, Z;
	cin >> N >> X >> Y >> Z;
	vector<int> H(N), A(N), B(N);
	for (int i = 0; i < N; ++i)
		H[i] = i;
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	for (int i = 0; i < N; ++i)
		cin >> B[i];
	sort(H.begin(), H.end(), [&](int i, int j){ return (A[i] == A[j]) ? i < j : A[i] > A[j]; });
	sort(H.begin() + X, H.end(), [&](int i, int j){ return (B[i] == B[j]) ? i < j : B[i] > B[j]; });
	sort(H.begin() + X + Y, H.end(), [&](int i, int j){ return (A[i] + B[i] == A[j] + B[j]) ? i < j : A[i] + B[i] > A[j] + B[j]; });
	sort(H.begin(), H.begin() + X + Y + Z);
	for (int i = 0; i < X + Y + Z; ++i)
		cout << H[i] + 1 << endl;
}