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
	string S, T;
	cin >> S >> T;
	int ans = 0;
	if (S[0] == T[0])
		++ans;
	if (S[1] == T[1])
		++ans;
	if (S[2] == T[2])
		++ans;
	cout << ans << endl;
}