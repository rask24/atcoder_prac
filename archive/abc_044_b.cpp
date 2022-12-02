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

int main(void)
{
	string w;
	cin >> w;
	vector<int> alpha(26, 0);
	for (int i = 0; i < w.length(); ++i)
		++alpha[w[i] - 'a'];
	for (int i = 0; i < 26; ++i)
	{
		if (alpha[i] % 2 == 1)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}