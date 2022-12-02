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
	int N;
	cin >> N;
	vector<pair<int, vector<int>>> a(N);
	for (int i = 0; i < N; ++i)
	{
		int L, x;
		cin >> L;
		a[i].first = L;
		for (int j = 0; j < L; ++j)
		{
			cin >> x;
			a[i].second.push_back(x);
		}
	}
	sort(a.begin(), a.end());

	int ans = 1;
	for (int i = 0; i < N - 1; ++i)
	{
		if (a[i].first != a[i + 1].first)
		{
			++ans;
			continue;
		}
		bool eq = true;
		for (int j = 0; j < a[i].first; ++j)
		{
			if (a[i].second[j] != a[i + 1].second[j])
				eq = false;
		}
		if (!eq)
			++ans;
	}
	cout << ans << endl;
}