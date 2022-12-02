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
#include <cctype>
#include <sstream>
using namespace std;
using namespace std::string_literals;

vector<int> T(5);
int ans = INT_MAX / 2;

void solve(int time, int flag)
{
	if (flag == 0b11111)
	{
		ans = min(ans, time);
		return;
	}
	for (int i = 0; i < 5; ++i)
	{
		if (!(flag & (1 << i)) and (flag | (1 << i)) == 0b11111)
			solve(time + T[i], flag | 1 << i);
		else if (!(flag & (1 << i)))
			solve(time + ((T[i] + 9) / 10) * 10, flag | 1 << i);
	}
}

int main(void)
{
	for (int i = 0; i < 5; ++i)
		cin >> T[i];	
	solve(0, 0);
	cout << ans << endl;
}