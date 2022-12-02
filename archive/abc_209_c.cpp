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

const long long MOD = 10e9 + 7;

int main(void)
{
	long long N;
	cin >> N;
	vector<long long> C(N);
	for (long long i = 0; i < N; ++i)
		cin >> C[i];
	sort(C.begin(), C.end());
	long long res = 1;
	for (long long i = 0; i < N; ++i)
	{
		res *= C[i] - i;
		res %= MOD;
	}
	cout << res << endl;
	cout << MOD << endl;
}