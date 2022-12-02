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
#include <cctype>
#include <sstream>
using namespace std;
using namespace std::string_literals;

int main(void)
{
	int N;
	cin >> N;
	vector<tuple<string, int, int>> P(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> get<0>(P[i]) >> get<1>(P[i]);
		get<2>(P[i]) = i + 1;
	}
	auto tuple_comp = [](tuple<string, int, int> t1, tuple<string, int, int> t2) -> bool
	{
		if (get<0>(t1) != get<0>(t2))
			return get<0>(t1) < get<0>(t2);
		else
			return get<1>(t1) > get<1>(t2);
	};
	sort(P.begin(), P.end(), tuple_comp);
	for (int i = 0; i < N; ++i)
		cout << get<2>(P[i]) << endl;
}