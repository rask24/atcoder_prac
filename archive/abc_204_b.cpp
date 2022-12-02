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
	int N;
	cin >> N;
	int res = 0;
	for (int i = 0; i < N; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp <= 10)
			continue;
		res += tmp - 10;
	}
	cout << res << endl;
}