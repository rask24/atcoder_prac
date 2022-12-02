#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }

int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> A(N);
	int min_key = -1;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	cout << (N - 1 + K - 2) / (K - 1) << endl;
}