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

int main()
{
	int X, Y;
	cin >> X >> Y;
	if (Y - X > 0 and (Y - X) % 10 != 0)
		cout << (Y - X) / 10 + 1 << endl;
	else if (Y - X > 0 and (Y - X) % 10 == 0)
		cout << (Y - X) / 10 << endl;
	else
		cout << 0 << endl;
}