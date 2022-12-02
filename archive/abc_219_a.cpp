#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int X;
	cin >> X;

	int res;
	if (X < 40)
		res = 40 - X;
	else if (X < 70)
		res = 70 - X;
	else if (X < 90)
		res = 90 - X;
	else
	{
		cout << "expert" << endl;
		return 0;
	}
	cout << res << endl;
}