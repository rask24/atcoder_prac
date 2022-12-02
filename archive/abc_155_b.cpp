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
using namespace std;
using namespace std::literals;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp % 2 == 0)
		{
			if ((tmp % 3 != 0) and (tmp % 5 != 0))
			{
				cout << "DENIED" << endl;
				return 0;
			}
		}
	}
	cout << "APPROVED" << endl;
}