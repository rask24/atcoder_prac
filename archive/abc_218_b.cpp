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
	for (int i = 0; i < 26; ++i)
	{
		int p;
		cin >> p;
		cout << (char)('a' + p - 1);
	}
	cout << endl;
}