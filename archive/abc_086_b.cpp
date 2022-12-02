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
	string a, b;
	cin >> a >> b;
	int n = stoi(a + b);
	for (int i = 1; i * i <= n; ++i)
	{
		if (i * i == n)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}