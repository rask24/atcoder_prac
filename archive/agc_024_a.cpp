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
using namespace std::string_literals;

int main(void)
{
	long long A, B, C, K;
	cin >> A >> B >> C >> K;
	long long ans = (K % 2 == 0) ? A - B : B - A;
	if (abs(ans) > 1e18)
		cout << "Unfair" << endl;
	else
		cout << ans << endl;
}