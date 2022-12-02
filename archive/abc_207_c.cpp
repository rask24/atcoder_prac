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
using namespace std;
using namespace std::literals;

int main(void)
{
	int N;
	cin >> N;
	vector<tuple<int, int, int>> T(N);
	for (int i = 0; i < N; ++i)
		cin >> get<2>(T[i]) >> get<0>(T[i]) >> get<1>(T[i]);
	sort(T.begin(), T.end());

	int res = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			int i_right = get<1>(T[i]);
			int j_left = get<0>(T[j]);
			int i_type = get<2>(T[i]);
			int j_type = get<2>(T[j]);
			if (i_right >  j_left)
				++res;
			else if ((i_type == 1 or i_type == 3) and (j_type == 1 or j_type == 2) and i_right == j_left)
				++res;
		}
	}
	cout << res << endl;
}