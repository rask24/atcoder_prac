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
	int N;
	cin >> N;
	vector<int> p(N);
	for (int i = 0; i < N; ++i)
		cin >> p[i];
	if (is_sorted(p.begin(), p.end()))
	{
		cout << "YES" << endl;
		return 0;
	}
	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			swap(p[i], p[j]);
			if (is_sorted(p.begin(), p.end()))
			{
				cout << "YES" << endl;
				return 0;
			}
			swap(p[i], p[j]);
		}
	}
	cout << "NO" << endl;
}