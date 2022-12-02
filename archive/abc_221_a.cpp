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
	int A, B;
	cin >> A >> B;

	long long res = 1;
	for (int i = 0; i < A - B; ++i)
		res *= 32;
	cout << res << endl;
}