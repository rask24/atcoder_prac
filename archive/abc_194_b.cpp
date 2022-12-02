#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
template<class T> inline bool chmin(T &a, T b){ if (b < a) { a = b; return true; } else { return false; } }

int main()
{
	int N;
	cin >> N;
	vector<int> A(N), B(N);
	for (int i = 0; i < N; ++i)
		 cin >> A[i] >> B[i];
	int ans = INF;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i == j)
				chmin(ans, A[i] + B[i]);
			else
				chmin(ans, max(A[i], B[j]));
		}
	}
	cout << ans << endl;
}	