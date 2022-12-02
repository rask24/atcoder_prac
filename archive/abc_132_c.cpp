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
	vector<int> d(N);
	for (int i = 0; i < N; ++i)
		cin >> d[i];
	sort(d.begin(), d.end());
	cout << d[N / 2] - d[N / 2 - 1] << endl;
}