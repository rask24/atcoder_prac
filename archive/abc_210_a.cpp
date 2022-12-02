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
#include <climits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int N, A, X, Y;
	cin >> N >> A >> X >> Y;

	int res;
	if (N <= A)
		res = X * N;
	else
		res = (X * A) + (Y * (N - A));
	cout << res << endl;
}