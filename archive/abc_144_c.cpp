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
	long long N;
	cin >> N;
	long long ans = 1LL << 60;
	for (long long i = 1; i * i <= N; ++i)
	{
		if (N % i != 0)
			continue;
		ans = min(ans, (i - 1) + (N / i - 1));
	}
	cout << ans << endl;
}