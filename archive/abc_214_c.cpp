#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

template<class T> void chmin(T &a, T b)
{
	if (b < a)
		a = b;
}

int main(void)
{
	long long N;
	cin >> N;
	vector<long long> S(N), T(N), dp(N);
	for (int i = 0; i < N; ++i)
		cin >> S[i];
	for (int i = 0; i < N; ++i)
		cin >> T[i];
	dp = T;
	
	for (int i = 0; i < 2 * N - 1; ++i)
		chmin(dp[(i + 1) % N], dp[i % N] + S[i % N]);

	for (int i = 0; i < N; ++i)
		cout << dp[i] << endl;
}