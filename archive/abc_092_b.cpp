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
	int N, D, X;
	cin >> N >> D >> X;
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	int res = 0;
	for (int i = 0; i < N; ++i)
		res += (D + A[i] - 1) / A[i];
	cout << res + X << endl;
}