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
#include <climits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int N, K;
	cin >> N >> K;
	vector<int> c(N);
	for (int i = 0; i < N; ++i)
		cin >> c[i];
	map<int, int> m;
	for (int i = 0; i < K; ++i)
		++m[c[i]];
	
	int res = m.size();
	for (int i = 1; i < N - K + 1; ++i)
	{
		--m[c[i - 1]];
		++m[c[i + K - 1]];
		if (m[c[i - 1]] == 0)
			m.erase(c[i - 1]);
		if (m.size() > res)
			res = m.size();
	}
	cout << res << endl;
}