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
	string N;
	cin >> N;
	bool nine = true;
	long long ans = 0;
	for (int i = 1; i < N.size(); ++i)
	{
		if (N[i] != '9')
			nine = false;
		ans += 9;
	}
	ans += N[0] - ((nine) ? '0' : '1');
	cout << ans << endl;
}