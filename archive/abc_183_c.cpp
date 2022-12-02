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
using namespace std::literals;

int res, N, K;
vector<vector<int>> T;

void solve(int bit, int sum, int root)
{
	if (bit == (pow(2, N) - 1))
	{
		if (sum + T[root][0] == K)
			++res;
		return;
	}
	for (int i = 0; i < N; ++i)
	{
		if (!(bit & (1 << i)) and i != root)
			solve(bit | (1 << i), sum + T[root][i], i);
	}
}

int main(void)
{
	cin >> N >> K;
	T.assign(N, vector<int> (N));
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
			cin >> T[i][j];
	}

	res = 0;
	solve(0, 0, 0);
	cout << res << endl;
}