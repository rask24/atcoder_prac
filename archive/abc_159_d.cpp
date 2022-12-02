#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<long long> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	map<long long, long long> m;
	for (long long i = 0; i < N; ++i) {
		++m[A[i]];
	}
	long long cnt = 0;
	for (auto [a, c] : m) {
		cnt += c * (c - 1) / 2;
	}
	for (long long i = 0; i < N; ++i) {
		long long sub = cnt;
		sub -= m[A[i]] * (m[A[i]] - 1) / 2;
		sub += (m[A[i]] - 1) * (m[A[i]] - 2) / 2;
		cout << sub << endl;
	}
}