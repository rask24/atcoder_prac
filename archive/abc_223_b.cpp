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
	string S, max_S, min_S;
	cin >> S;
	max_S = min_S = S;

	for (int i = 1; i < S.size(); ++i)
	{
		S = S.substr(1, S.size() - 1) + S[0];
		if (S < min_S)
			min_S = S;
		if (S > max_S)
			max_S = S;
	}
	cout << min_S << endl;
	cout << max_S << endl;
}