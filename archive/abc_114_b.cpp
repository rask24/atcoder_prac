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
	string S;
	cin >> S;
	int res = 1e8;
	for (int i = 0; i < S.size() - 2; ++i)
	{
		int n = stoi(S.substr(i, 3));
		res = min(res, abs(753 - n));
	}
	cout << res << endl;
}