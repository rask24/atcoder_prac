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
	string S;
	cin >> S;
	for (int i = 0; i < S.size(); ++i)
	{
		if (
			(i % 2 == 1 and S[i] != 'L' and S[i] != 'U' and S[i] != 'D')
			or
			(i % 2 == 0 and S[i] != 'R' and S[i] != 'U' and S[i] != 'D')
		)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}