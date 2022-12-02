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
	long long N, M;
	cin >> N >> M;
	if (N == 1 and M == 1)
		cout << 1 << endl;
	else if (N == 1 or M == 1)
		cout << max(N, M) - 2 << endl;
	else
		cout << N * M - (N - 1) * 2 - (M - 1) * 2 << endl;
}