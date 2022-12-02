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

int main(void)
{
	int N, M;
	cin >> N >> M;
	unordered_map<int, int> m;
	for (int i = 0; i < N; ++i)
	{
		int K, A;
		cin >> K;
		for (int j = 0; j < K; ++j)
		{
			cin >> A;
			++m[A];
		}
	}
	int ans = 0;
	for (auto i : m)
	{
		if (i.second == N)
			++ans;
	}
	cout << ans << endl;
}