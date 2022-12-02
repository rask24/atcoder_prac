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
	string S, T;
	cin >> S >> T;
	S += S;
	for (int i = 0; i < T.length(); ++i)
	{
		if (S.substr(i, T.length()) == T)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}