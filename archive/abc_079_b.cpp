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
using namespace std::string_literals;

int main(void)
{
	int N;
	cin >> N;
	vector<long long> L(87);
	L[0] = 2;
	L[1] = 1;
	for (int i = 2; i <= 86; ++i)
		L[i] = L[i - 1] + L[i - 2];
	cout << L[N] << endl;
}