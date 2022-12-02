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
using namespace std::string_literals;

int main(void)
{
	int A, B;
	cin >> A >> B;
	for (int i = 1; i <= 1000; ++i)
	{
		int tax_A, tax_B;
		tax_A = (double)i * 0.08;
		tax_B = (double)i * 0.10;
		if (tax_A == A and tax_B == B)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}