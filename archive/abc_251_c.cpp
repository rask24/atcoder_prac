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
	map<string, pair<int, int>> m;
	pair<int, int> ans = make_pair(0, 0);
	int N, T;
	string S;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> S >> T;
		if (m.find(S) == m.end())
		{
			m[S] = make_pair(i + 1, T);
			if (ans.second < T)
				ans = make_pair(i + 1, T);
		}
	}
	cout << ans.first << endl;
}