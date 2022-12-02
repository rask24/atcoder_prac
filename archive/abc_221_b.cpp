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
	string S, T;
	cin >> S >> T;

	if (S == T)
	{
		cout << "Yes" << endl;
		return 0;
	}
	for (int i = 0; i < S.size() - 1; ++i)
	{
		string tmp = S;
		swap(tmp[i], tmp[i + 1]);
		if (tmp == T)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}