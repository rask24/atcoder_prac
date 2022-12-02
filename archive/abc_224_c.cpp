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
	long long N;
	cin >> N;
	vector<pair<long long, long long>> p(N);
	for (long long i = 0; i < N; ++i)
		cin >> p[i].first >> p[i].second;
	
	long long count = 0;
	for (long long i = 0; i < N; ++i)
	{
		for (long long j = i + 1; j < N; ++j)
		{
			for (long long k = j + 1; k < N; ++k)
			{
				long long dx1, dx2, dy1, dy2;
				dx1 = p[j].first - p[i].first;
				dx2 = p[k].first - p[i].first;
				dy1 = p[j].second - p[i].second;
				dy2 = p[k].second - p[i].second;
				if (dx1 * dy2 != dx2 * dy1)
					++count;
			}
		}
	}
	cout << count << endl;
}