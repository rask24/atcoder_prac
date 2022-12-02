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
	string S1, S2, S3, T, res;
	cin >> S1 >> S2 >> S3 >> T;

	res = "";
	for (int i = 0; i < T.size(); ++i)
	{
		if (T[i] == '1')
			res += S1;
		else if (T[i] == '2')
			res += S2;
		else
			res += S3;
	}
	cout << res << endl;
}