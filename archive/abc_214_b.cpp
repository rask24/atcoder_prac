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

int main(void)
{
	int S, T;
	cin >> S >> T;

	int res = 0;
	for (int s = 0; s <= S; ++s)
	{
		for (int a = 0; a <= s; ++a)
		{
			for (int b = 0; b <= s; ++b)
			{
				if (s - a - b >= 0 and a * b * (s - a - b) <= T)
					++res;
			}
		}
	}
	cout << res << endl;
}