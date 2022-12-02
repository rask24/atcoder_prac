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
	int N, x;
	cin >> N >> x;
	vector<int> a(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	sort(a.begin(), a.end());
	int i, ans;
	for (i = 0; i < N; ++i)
	{
		if (x <= 0)
			break;
		x -= a[i];
	}
	cout << ((x == 0) ? i : i - 1) << endl;
}