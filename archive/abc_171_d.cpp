#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<long long> A(N);
	long long S = 0;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		S += A[i];
	}
	long long Q;
	cin >> Q;
	vector<long long> B(Q), C(Q);
	for (int i = 0; i < Q; ++i)
		 cin >> B[i] >> C[i];
	unordered_map<long long, long long> m;
	for (int i = 0; i < N; ++i) {
		++m[A[i]];
	}
	for (int i = 0; i < Q; ++i) {
		if (m.find(B[i]) != m.end()) {
			S += (C[i] - B[i]) * m[B[i]];
			m[C[i]] += m[B[i]];
			m[B[i]] = 0;
		}
		cout << S << endl;
	}
}