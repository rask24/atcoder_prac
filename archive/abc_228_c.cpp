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
	int N, K;
	cin >> N >> K;
	vector<pair<int, int>> p(N);
	for (int i = 0; i < N; ++i)
	{
		int p1, p2, p3;
		cin >> p1 >> p2 >> p3;
		p[i] = make_pair(p1 + p2 + p3, i);
	}

	sort(p.begin(), p.end());
	reverse(p.begin(), p.end());
	
	vector<bool> b(N);
	for (int i = 0; i < N; ++i)
	{
		if (p[i].first + 300 >= p[K - 1].first)
			b[p[i].second] = true;
		else
			b[p[i].second] = false;
	}

	for (auto const &i : b)
		cout << (i ? "Yes" : "No") << endl;
}