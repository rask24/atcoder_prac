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
	long long N, K;
	cin >> N >> K;
	if (K < N)
		N -= (N - 1) / K * K;
	cout << min(N, K - N) << endl;
}