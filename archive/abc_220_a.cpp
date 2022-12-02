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
	int A, B, C;
	cin >> A >> B >> C;

	for (int i = A; i <= B; ++i)
	{
		if (i % C == 0)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}