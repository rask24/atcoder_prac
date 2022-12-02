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

int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= 50000; ++i)
	{
		if (floor(i * 1.08) == N)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << ":(" << endl;
}