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
	int X;
	cin >> X;
	int a, b;
	a = X / 100;
	b = X % 100;
	cout << ((0 <= b and b <= 5 * a) ? 1 : 0) << endl;
}