#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> A(N), B(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	for (int i = 0; i < N; ++i)
		cin >> B[i];
	
	vector<bool> a_dp(N), b_dp(N);
	a_dp[0] = b_dp[0] = true;

	for (int i = 1; i < N; ++i)
	{
		if (
			(a_dp[i - 1] and abs(A[i] - A[i - 1]) <= K) or
			(b_dp[i - 1] and abs(A[i] - B[i - 1]) <= K)
		)
			a_dp[i] = true;
		else
			a_dp[i] = false;
		if (
			(a_dp[i - 1] and abs(B[i] - A[i - 1]) <= K) or
			(b_dp[i - 1] and abs(B[i] - B[i - 1]) <= K)
		)
			b_dp[i] = true;
		else
			b_dp[i] = false;
	}

	if (a_dp[N - 1] or b_dp[N - 1])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}