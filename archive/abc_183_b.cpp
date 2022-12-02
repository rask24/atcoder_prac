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

const long long MOD = 10e9 + 7;

int main(void)
{
	double sx, sy, gx, gy;
	cin >> sx >> sy >> gx >> gy;
	cout << setprecision(12) << sx + sy * (gx - sx) / (sy + gy) << endl;
}