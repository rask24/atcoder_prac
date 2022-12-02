#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	map<int, int> m;
	int Q;
	cin >> Q;
	int min_value, max_value;
	for (int i = 0; i < Q; ++i)
	{
		int mode, x, c;
		cin >> mode;

		if (mode == 1)
		{
			cin >> x;
			if (m.find(x) != m.end())
				++m[x];
			else
				m[x] = 1;
		}
		else if (mode == 2)
		{
			cin >> x >> c;
			if (m.find(x) != m.end())
			{
				m[x] = m[x] - min(c, m[x]);
				if (m[x] == 0)
					m.erase(x);
			}
		}
		else
			cout << (m.rbegin())->first - (m.begin())->first << endl;
	}
}