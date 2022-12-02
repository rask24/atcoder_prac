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

int distance(string S, string T)
{
	int ret = 0;
	for (int i = 0; i < S.size(); ++i)
	{
		if (S[i] != T[i])
			++ret;
	}
	return ret;
}

int main(void)
{
	string S, T1, T2;
	cin >> S;
	for (int i = 0; i < S.size(); ++i)
	{
		T1.push_back((i % 2 == 0) ? '0' : '1');
		T2.push_back((i % 2 == 1) ? '0' : '1');
	}
	cout << min(distance(S, T1), distance(S, T2)) << endl;
}