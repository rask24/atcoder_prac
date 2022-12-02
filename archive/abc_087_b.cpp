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
	int A, B, C, X;
	cin >> A >> B >> C >> X;
	int ans = 0;
	for (int i = 0; i <= A; ++i)
	{
		for (int j = 0; j <= B; ++j)
		{
			for (int k = 0; k <= C; ++k)
			{
				if (500 * i + 100 * j + 50 * k == X)
					++ans;
			}
		}
	}
	cout << ans << endl;
}