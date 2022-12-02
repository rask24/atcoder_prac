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
using namespace std;
using namespace std::literals;

int main(void)
{
	vector<int> a(3);
	cin >> a[0] >> a[1] >> a[2];
	sort(a.begin(), a.end());
	cout << a[1] + a[2] << endl;
}