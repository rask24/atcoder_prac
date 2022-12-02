#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	long long N;
	cin >> N;
	long long a, b, c;
	long long res = 0;
	for (long long a = 1; a * a * a <= N; ++a)
	{
		for (long long b = a; a * b * b <= N; ++b)
		{
			res += N / (a * b) - b + 1;
		}
	}
	cout << res << endl;
}