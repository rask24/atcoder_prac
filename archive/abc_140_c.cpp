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
using namespace std::string_literals;

int main(void)
{
	int N;
	cin >> N;
	vector<int> B(N - 1);
	for (int i = 0; i < N - 1; ++i)
		cin >> B[i];
	int ans = B[0] + B[N - 2];
	for (int i = 0; i < N - 2; ++i)
		ans += min(B[i], B[i + 1]);
	cout << ans << endl;
}