#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int N, W;
	cin >> N >> W;
	vector<pair<long long, long long>> p(N);
	for (int i = 0; i < N; ++i)
		cin >> p[i].first >> p[i].second;
	
	sort(p.begin(), p.end());
	reverse(p.begin(), p.end());

	long long ans = 0;
	long long weight = 0;
	for (int i = 0; i < N; ++i)
	{
		if (weight + p[i].second <= W)
		{
			ans += p[i].first * p[i].second;
			weight += p[i].second;
		}
		else
		{
			ans += (W - weight) * p[i].first;
			break;
		}
	}
	cout << ans << endl;
}