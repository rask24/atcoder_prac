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
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int res = -1;
	int diff = C * D - B;
	if (diff > 0)
		res = (A + diff - 1) / diff;
	cout << res << endl;
}