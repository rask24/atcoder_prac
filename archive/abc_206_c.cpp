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
	map<int, int> m;
	long long res = 0;
	for (int i = 0; i < N; ++i)
	{
		int tmp;
		cin >> tmp;
		++m[tmp];
		if (i)
			res += i + 1 - m[tmp];
	}
	cout << res << endl;
}