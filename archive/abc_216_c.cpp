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
	cin >> N;

	string S;
	while (N)
	{
		if (N % 2 == 0)
		{
			N /= 2;
			S = "B" + S;
		}
		else
		{
			--N;
			S = "A" + S;
		}
	}
	cout << S << endl;
}