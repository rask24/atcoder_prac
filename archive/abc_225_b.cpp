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
	int N;
	cin >> N;
	vector<vector<int>> t(N + 1);
	for (int i = 1; i < N; ++i)
	{
		int x, y;
		cin >> x >> y;
		t[x].push_back(y);
		t[y].push_back(x);
	}
	for (int i = 1; i <= N; ++i)
	{
		if (t[i].size() == N - 1)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}