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
	int N;
	cin >> N;
	map<int, int> m;
	for (int i = 1; i <= N; ++i)
		cin >> m[i];
	int ans = 0;
	for (auto i : m)
	{
		if (i.first == m[i.second])
			++ans;
	}
	cout << ans / 2 << endl;
}