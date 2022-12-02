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
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;
	cin >> x1 >> y1 >> x2 >> y2;
	x3 = x2 - (y2 - y1);
	y3 = y2 + (x2 - x1);
	x4 = x3 - (y3 - y2);
	y4 = y3 + (x3 - x2);
	cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}