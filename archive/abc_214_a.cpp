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
	int N;
	cin >> N;
	int res;
	if(N < 126)
		res = 4;
	else if (N < 212)
		res = 6;
	else
		res = 8;
	cout << res << endl;
}