#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;
using namespace std::literals;

int f(int t)
{
	return t * t + 2 * t + 3;
}

int main()
{
	int t;
	cin >> t;
	cout << f(f(f(t) + t) + f(f(t))) << endl;
}