#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N), B(N), T(2 * N);
	for (int i = 0; i < N; ++i) {
		cin >> A[i] >> B[i];
		T[2 * i] = A[i];
		T[2 * i + 1] = A[i] + B[i];
	}
	sort(T.begin(), T.end());
	T.erase(unique(T.begin(), T.end()), T.end());
	vector<int> C(N), D(N);
	for (int i = 0; i < N; ++i) {
		C[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
		D[i] = lower_bound(T.begin(), T.end(), A[i] + B[i]) - T.begin();
	}
	vector<int> S(2 * N, 0);
	for (int i = 0; i < N; ++i) {
		++S[C[i]];
		--S[D[i]];
	}
	for (int i = 1; i < 2 * N; ++i)
		S[i] += S[i - 1];

	vector<int> ans(N + 1, 0);
	for (int i = 0; i < T.size() - 1; ++i)
		ans[S[i]] += T[i + 1] - T[i];
	for (int i = 1; i <= N; ++i)
		cout << ans[i] << " ";
	cout << "" << endl;
}