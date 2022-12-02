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
using namespace std;
using namespace std::literals;

int main(void)
{
	int N;
	cin >> N;
	map<string, int> m;
	for (int i = 0; i < N; ++i)
	{
		string S;
		cin >> S;
		++m[S];
	}
	int cnt = 0;
	for (auto i : m)
	{
		if (i.second > cnt)
			cnt = i.second;
	}
	for (auto i : m)
	{
		if (i.second == cnt)
			cout << i.first << endl;
	}
}