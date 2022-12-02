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
	long long N;
	cin >> N;
	long long i = 1;
	while (true)
	{
		string S = to_string(i);
		if (stoll(S + S) > N)
			break;
		++i;
	}
	cout << --i << endl;
}