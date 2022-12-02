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
	long long N;
	int k = 0;
	cin >> N;
	while (true)
	{
		if ((1LL << (k + 1)) > N)
			break;
		++k;
	}
	cout << k << endl;
}