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
	double R, X, Y;
	cin >> R;
	X = floor(R);
	Y = (R - X) * 10;
	string ch = "";
	if (Y <= 2)
		ch = "-";
	else if (7 <= Y)
		ch = "+";
	cout << X << ch << endl;
}