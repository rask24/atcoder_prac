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
	long long a, b;
	cin >> a >> b;
	if (a <= 0 and 0 <= b)
		cout << "Zero" << endl;
	else if (b < 0 and (b - a + 1) % 2 == 1)
		cout << "Negative" << endl;
	else
		cout << "Positive" << endl;
}