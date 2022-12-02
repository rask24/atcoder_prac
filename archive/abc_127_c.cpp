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
	int N, M;
	cin >> N >> M;
	vector<int> L(M), R(M);
	int l_max, r_min;
	l_max = 0;
	r_min = 1e8;
	for (int i = 0; i < M; ++i)
	{
		cin >> L[i] >> R[i];
		l_max = max(L[i], l_max);
		r_min = min(R[i], r_min);
	}
	
	cout << max(0, r_min - l_max + 1) << endl;
}