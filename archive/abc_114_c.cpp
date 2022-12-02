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

void func(long long N, long long cur, int use, long long &counter)
{
	if (cur > N)
		return;
	if (use == 0b111)
		++counter;
	cerr << cur << endl;
	
	func(N, cur * 10 + 7, use | 0b001, counter);
	func(N, cur * 10 + 5, use | 0b010, counter);
	func(N, cur * 10 + 3, use | 0b100, counter);
}

int main(void)
{
	long long N;
	cin >> N;
	long long counter = 0;
	func(N, 0, 0, counter);
	cout << counter << endl;
}