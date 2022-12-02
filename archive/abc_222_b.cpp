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
	int N, P;
	cin >> N >> P;
	vector<int> a(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i];

	int ans = 0;
	for (int i = 0; i < N; ++i)
	{
		if (a[i] < P)
			++ans;
	}
	cout << ans << endl;
}