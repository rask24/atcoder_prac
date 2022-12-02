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
#include <cctype>
#include <sstream>
using namespace std;
using namespace std::string_literals;

int main(void)
{
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; ++i)
	{
		int tmp, dt;
		cin >> tmp;
		dt = 0;
		while (tmp % 2 == 0)
		{
			++dt;
			tmp /= 2;
		}
		sum += dt;
	}
	cout << sum << endl;
}