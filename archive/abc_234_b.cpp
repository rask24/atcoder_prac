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

double dist(pair<int, int> p1, pair<int, int> p2)
{
	return sqrt((p1.first - p2.first) * (p1.first - p2.first)
		+ (p1.second - p2.second) * (p1.second - p2.second));
}

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> p(N);
	for (int i = 0; i < N; ++i)
		cin >> p[i].first >> p[i].second;

	double ans = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			ans = max(ans, dist(p[i], p[j]));
		}
	}
	cout << setprecision(15) << ans << endl;
}