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
	int N, K;
	cin >> N >> K;
	vector<int> h(N);
	for (int i = 0; i < N; ++i)
		cin >> h[i];
	sort(h.begin(), h.end());
	int ans = INT_MAX / 2;
	for (int i = 0; i + K - 1 < N; ++i)
		ans = min(ans, h[i + K - 1] - h[i]);
	cout << ans << endl;
}