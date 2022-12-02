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
	map<string, int> m;
	m["H"s] = m["2B"s] = m["3B"s] = m["HR"] = 0;
	for (int i = 0; i < 4; ++i)
	{
		string T;
		cin >> T;
		++m[T];
	}
	for (auto i : m)
	{
		if (i.second == 0)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}