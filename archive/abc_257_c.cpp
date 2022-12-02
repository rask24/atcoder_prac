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
#include <sstream>
using namespace std;
using namespace std::literals;

int main(void)
{
	int N;
	string S;
	cin >> N >> S;
	vector<pair<int, int>> P(N);
	vector<int> child(N + 1, 0), adult(N + 1);
	for (int i = 0; i < N; ++i)
	{
		cin >> P[i].first;
		P[i].second = S[i] - '0';
	}
	sort(P.begin(), P.end());
	for (int i = 0; i < N; ++i)
		child[i + 1] = child[i] + 1 - P[i].second;
	adult.back() = 0;
	for (int i = N; i > 0; --i)
		adult[i - 1] = adult[i] + P[i - 1].second;

	int e = N;
	for (int i = 0; i < N; ++i)
	{
		if (i and P[i - 1].first == P[i].first)
			continue;
		e = min(e, abs(child[i] - i) + abs(adult[i] - (N - i)));
	}
	e = min(e, abs(child.back() - N) + abs(adult.back()));
	cout << N - e << endl;
}