#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;
using namespace std::literals;

int main()
{
	int N;
	cin >> N;
	map<string, int> m;
	string S;
	for (int i = 0; i < N; ++i)
	{
		cin >> S;
		if (m.find(S) != m.end())
			++m[S];
		else
			m[S] = 1;
	}
	string ans;
	int mv = 0;
	for (auto & [key, value] : m)
	{
		if (mv < value)
		{
			ans = key;
			mv = value;
		}
	}
	cout << ans << endl;
}