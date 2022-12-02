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

const long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b)
{
	if (a > b)
		a = b;
}

template<class T> void chmax(T& a, T b)
{
	if (a < b)
		a = b;
}

int digit(unsigned long long n)
{
	int ret = 0;

	while (n)
	{
		++ret;
		n /= 10;
	}
	return ret;
}

int main(void)
{
	unsigned long long A, B;
	cin >> A >> B;

	while (A)
	{
		if ((A % 10) + (B % 10) >= 10)
		{
			cout << "Hard" << endl;
			return 0;
		}
		A /= 10;
		B /= 10;
	}
	cout << "Easy" << endl;
}