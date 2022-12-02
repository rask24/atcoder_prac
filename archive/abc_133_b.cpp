#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <climits>
#include <sstream>
using namespace std;
using namespace std::string_literals;

long long distance(vector<long long> a, vector<long long> b)
{
	long long ret = 0;
	for (int i = 0; i < a.size(); ++i)
		ret += (a[i] - b[i]) * (a[i] - b[i]);
	return ret;
}

bool is_square(long long n)
{
	for (long long i = 1; i * i <= n; ++i)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

int main(void)
{
	int N, D;
	cin >> N >> D;
	vector<vector<long long>> X(N, vector<long long> (D));
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < D; ++j)
			cin >> X[i][j];
	}
	int ans = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			if (is_square(distance(X[i], X[j])))
				++ans;
		}
	}
	cout << ans << endl;
}