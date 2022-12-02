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
	int A, B, C;
	cin >> A >> B >> C;
	int i = 0;
	int init_A, init_B, init_C;
	init_A = A;
	init_B = B;
	init_C = C;
	while (A % 2 == 0 and B % 2 == 0 and C % 2 == 0)
	{
		++i;
		int tmp_A, tmp_B, tmp_C;
		tmp_A = A;
		tmp_B = B;
		tmp_C = C;
		A = tmp_B / 2 + tmp_C / 2;
		B = tmp_C / 2 + tmp_A / 2;
		C = tmp_A / 2 + tmp_B / 2;
		if (A == init_A and B == init_B and C == init_C)
		{
			cout << -1 << endl;
			return 0;
		}
	}
	cout << i << endl;
}