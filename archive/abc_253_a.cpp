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
	int a, b, c;
	cin >> a >> b >> c;

	if ((a <= b and b <= c) or (c <= b and b <= a))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}