#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int x, a, b, c;
	cin >> x;
	c = x % 10;
	x /= 10;
	b = x % 10;
	x /= 10;
	a = x;
	cout << (100 * a + 10 * b + c) + (100 * b + 10 * c + a) + (100 * c + 10 * a + b) << endl;
}