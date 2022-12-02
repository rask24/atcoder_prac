#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <climits>
#include <sstream>
using namespace std;
using namespace std::literals;

int main(void)
{
	vector<char> c(9);
	for (int i = 0; i < 9; ++i)
		cin >> c[i];
	cout << c[0] << c[4] << c[8] << endl;
}