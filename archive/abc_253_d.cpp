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

unsigned long long sum(unsigned long long n)
{
	return n * (n + 1) / 2;
}

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

unsigned long long lcm(unsigned long long a, unsigned long long b)
{
	return a / gcd(a, b) * b;
}

int main(void)
{
	unsigned long long N, A, B, L;
	cin >> N >> A >> B;
	L = lcm(A, B);

	cout << sum(N) - A * sum(N / A) - B * sum(N / B) + L * sum(N / L) << endl;
}