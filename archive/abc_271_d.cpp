#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, S;
	cin >> N >> S;
	vector<int> a(N), b(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i] >> b[i];
	vector<vector<bool>> dp(N + 1, vector<bool> (S + 1, false));
	dp[0][0] = true;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < S; ++j) {
			if (dp[i][j]) {
				if (j + a[i] <= S)
					dp[i + 1][j + a[i]] = true;
				if (j + b[i] <= S)
					dp[i + 1][j + b[i]] = true;
			}
		}
	}
	string T;
	int U = S;
	for (int i = N - 1; i >= 0; --i) {
		if (S - a[i] >= 0 && dp[i][S - a[i]]) {
			T.push_back('H');
			S -= a[i];
		} else if (S - b[i] >= 0 && dp[i][S - b[i]]) {
			T.push_back('T');
			S -= b[i];
		}
	}
	reverse(T.begin(), T.end());
	if (dp[N][U]) {
		cout << "Yes" << endl;
		cout << T << endl;
	} else {
		cout << "No" << endl;
	}
}