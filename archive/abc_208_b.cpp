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
using namespace std;
using namespace std::literals;

int main(void)
{
	int P;
	cin >> P;
	vector<int> coin(11, 0);
	int fac = 1;
	for (int i = 1; i <= 10; ++i)
	{
		fac *= i;
		coin[i] = fac;
	}
	int ans = 0;
	for (int i = 10; i >= 1; --i)
	{
		ans += min(100, P / coin[i]);
		P -= min(100, P / coin[i]) * coin[i];
	}
	cout << ans << endl;
}