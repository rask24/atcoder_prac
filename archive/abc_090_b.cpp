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
	int A, B;
	cin >> A >> B;
	int res = 0;
	for (int i = A; i <= B; ++i)
	{
		string S = to_string(i);
		string T = S;
		reverse(T.begin(), T.end());
		if (S == T)
			++res;
	}
	cout << res << endl;
}