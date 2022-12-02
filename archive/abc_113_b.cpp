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
	int N, T, A;
	cin >> N >> T >> A;
	vector<int> H(N);
	for (int i = 0; i < N; ++i)
		cin >> H[i];
	
	double tmp = 10000000;
	int res = -1;
	for (int i = 0; i < N; ++i)
	{
		if (abs(A - (T - H[i] * 0.006)) < tmp)
		{
			tmp = abs(A - (T - H[i] * 0.006));
			res = i;
		}
	}
	cout << res + 1 << endl;
}