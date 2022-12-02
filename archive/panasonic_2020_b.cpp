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
	long long A, B;
	cin >> A >> B;
	long long res;
	if (A == 1 or B == 1)
		res = 1;
	else
		res = A * B / 2 + (A * B % 2 == 1);
	cout << res << endl;
}