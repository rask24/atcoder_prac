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
	int N;
	string S;
	cin >> N >> S;
	int x, max_val;
	x = max_val = 0;
	for (int i = 0; i < N; ++i)
	{
		if (S[i] == 'I')
			++x;
		else if (S[i] == 'D')
			--x;
		max_val = max(max_val, x);
	}
	cout << max_val << endl;
}