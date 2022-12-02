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
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());
	double value = v[0];
	for (int i = 1; i < N; ++i)
		value = (value + v[i]) / 2.0;
	cout << setprecision(12) << value << endl;
}