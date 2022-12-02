#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N), B(N), C(N), D(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	for (int i = 0; i < N; ++i)
		cin >> B[i];
	for (int i = 0; i < N; ++i) {
		cin >> C[i];
		--C[i];
	}
	for (int i = 0; i < N; ++i)
		D[i] = B[C[i]];
	sort(A.begin(), A.end());
	sort(D.begin(), D.end());

	long long ans = 0;
	for (int i = 0; i < N; ++i) {
		ans += upper_bound(D.begin(), D.end(), A[i]) - lower_bound(D.begin(), D.end(), A[i]);
	}
	cout << ans << endl;
}