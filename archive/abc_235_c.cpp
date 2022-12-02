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
 	int N, Q;
	cin >> N >> Q;
	vector<pair<int, int>> q(Q);
	map<int, vector<int>> m;
	int tmp;
	for (int j = 0; j < N; ++j)
	{
		cin >> tmp;
		if (m.find(tmp) != m.end())
			m[tmp].push_back(j + 1);
		else
			m[tmp] = vector<int>{j + 1};
	}
	for (int i = 0; i < Q; ++i)
		cin >> q[i].first >> q[i].second;

	for (int i = 0; i < Q; ++i)
	{
		if (m.find(q[i].first) != m.end() and q[i].second <= m[q[i].first].size())
			cout << m[q[i].first][q[i].second - 1] << endl;
		else
			cout << -1 << endl;
	}
}