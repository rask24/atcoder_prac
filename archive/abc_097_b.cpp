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

int main(void)
{
	int X;
	cin >> X;
	int ans = 1;
	if (X <= 3)
	{
		cout << ans << endl;
		return 0;
	}
	for (int i = 2; i <= X; ++i)
	{
		int tmp = i;
		if (i * i > X)
			continue;
		while (tmp * i <= X)
			tmp *= i;
		ans = max(ans, tmp);
	}
	cout << ans << endl;
}