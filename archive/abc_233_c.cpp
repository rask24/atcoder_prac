#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
using namespace std::literals;

int solve(vector<vector<int>> &a, int n, long long x)
{
	if (n == 0)
	{
		if (x == 1)
			return 1;
		else
			return 0;
	}

	int ret = 0;
	for (int i = 0; i < a[n - 1].size(); ++i)
	{
		if (x % a[n - 1][i] != 0)
			continue;
		ret += solve(a, n - 1, x / a[n - 1][i]);
	}
	return ret;
}

int main(void)
{
	long long N, X;
	cin >> N >> X;
	vector<vector<int>> a(N);
	for (int i = 0; i < N; ++i)
	{
		int L;
		cin >> L;
		a[i] = vector<int> (L, 0);
		for (int j = 0; j < L; ++j)
			cin >> a[i][j];
	}

	cout << solve(a, N, X) << endl;
}