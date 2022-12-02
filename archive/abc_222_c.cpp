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

const int WIN = 1;
const int DRAW = 0;
const int LOSE = -1;

int rcp(char h1, char h2)
{
	if ((h1 == 'G' and h2 == 'C') or (h1 == 'C' and h2 == 'P') or (h1 == 'P' and h2 == 'G'))
		return WIN;
	else if (h1 == h2)
		return DRAW;
	else
		return LOSE;
}

bool comp_pair(pair<int, int> a, pair<int, int> b)
{
	if (a.first != b.first)
		return a.first > b.first;
	else
		return a.second < b.second;
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<string> A(2 * N);
	vector<pair<int, int>> od(2 * N);
	for (int i = 0; i < 2 * N; ++i)
	{
		cin >> A[i];
		od[i].first = 0;
		od[i].second = i;
	}
	for (int i = 0; i < M; ++i)
	{
		for (int k = 0; k < N; ++k)
		{
			int res = rcp(A[od[2 * k].second][i], A[od[2 * k + 1].second][i]);
			if (res == WIN)
				++od[2 * k].first;
			else if (res == LOSE)
				++od[2 * k + 1].first;
		}
		sort(od.begin(), od.end(), comp_pair);
	}

	for (int i = 0; i < 2 * N; ++i)
		cout << od[i].second + 1 << endl;
}