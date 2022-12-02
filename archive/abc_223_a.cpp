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
	int X;
	cin >> X;
	cout << ((X / 100 > 0 and X % 100 == 0) ? "Yes" : "No") << endl;
}