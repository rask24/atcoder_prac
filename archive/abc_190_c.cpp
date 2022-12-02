#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> A(M), B(M);
	for (int i = 0; i < M; ++i) {
		cin >> A[i] >> B[i];
		--A[i], --B[i];
	}
	int K;
	cin >> K;
	vector<int> C(K), D(K);
	for (int i = 0; i < K; ++i) {
		cin >> C[i] >> D[i];
		--C[i], --D[i];
	}
	
	long long ans = 0;
	for (int bit = 0; bit < (1LL << K); ++bit) {
		vector<int> dish(M, 0);
		for (int i = 0; i < K; ++i) {
			if (bit & (1LL << i))
				++dish[C[i]];
			else
				++dish[D[i]];
		}
		long long sum = 0;
		for (int i = 0; i < M; ++i) {
			if (dish[A[i]] and dish[B[i]])
				++sum;
		}
		chmax(ans, sum);
	}
	cout << ans << endl;
}