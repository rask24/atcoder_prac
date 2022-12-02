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
	int e, w, n, s;
	e = w = n = s = 0;
	string S;
	cin >> S;
	for (int i = 0; i < S.size(); ++i)
	{
		if (S[i] == 'E')
			++e;
		if (S[i] == 'W')
			++w;
		if (S[i] == 'N')
			++n;
		if (S[i] == 'S')
			++s;
	}
	cout << ((((e and !w) or (!e and w)) or ((n and !s) or (!n and s))) ? "No" : "Yes") << endl;
}