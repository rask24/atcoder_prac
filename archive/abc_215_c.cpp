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
	string S;
	int k;
	cin >> S >> k;
	sort(S.begin(), S.end());
	for (int i = 0; i < k - 1; ++i)
		next_permutation(S.begin(), S.end());
	cout << S << endl;
}