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
	int A, B, C, X, Y;
	cin >> A >> B >> C >> X >> Y;
	int ans = 0;
	if (2 * C < A + B)
	{
		int tmp1, tmp2;
		tmp1 = C * min(X, Y) * 2;
		tmp1 += ((X > Y) ? A : B) * (max(X, Y) - min(X, Y));
		tmp2 = C * max(X, Y) * 2;
		ans = min(tmp1, tmp2);
	}
	else
		ans += X * A + Y * B;
	cout << ans << endl;
}