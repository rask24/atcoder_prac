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
	int A, B; 
	cin >> A >> B;
	int res = 0;
	for (int i = 0; i < 8; ++i)
	{
		if (A & (1 << i))
		{
			if (!(B & (1 << i)))
				res += (1 << i);
		}
		else
		{
			if (B & (1 << i))
				res += (1 << i);
		}
	}
	cout << res << endl;
}