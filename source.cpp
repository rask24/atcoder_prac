#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;
template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	int N;
	cin >> N;
	vector<long long> A(N), B(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	for (int i = 0; i < N; ++i)
		cin >> B[i];
	vector<vector<long long>> dp(N, vector<long long>(3001, 0));
	for (int i = 0; i < N - 1; ++i) {
		for (int j = 0; j <= 3000; ++j) {
			if (i == 0 && A[i] <= j && j <= B[i]) {
				dp[i][j] = 1;
			}
			if (i > 0 && )
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < 3001; ++j) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
}