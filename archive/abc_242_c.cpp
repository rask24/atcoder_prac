#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<long long>> dp(10, vector<long long> (N + 1, 0));
	for (int i = 1; i <= 9; ++i)
		dp[i][1] = 1;
	
	for (int j = 1; j < N; ++j)
	{
		for (int i = 1; i <= 9; ++i)
		{
			if (i - 1 > 0)
			{
				dp[i - 1][j + 1] += dp[i][j];
				dp[i - 1][j + 1] %= 998244353;
			}
			dp[i][j + 1] += dp[i][j];
			dp[i][j + 1] %= 998244353;
			if (i + 1 <= 9)
			{
				dp[i + 1][j + 1] += dp[i][j];
				dp[i + 1][j + 1] %= 998244353;
			}
		}
	}
	long long sum = 0;
	for (int i = 1; i <= 9; ++i)
	{
		sum += dp[i][N];
		sum %= 998244353;
	}
	cout << sum << endl;
}