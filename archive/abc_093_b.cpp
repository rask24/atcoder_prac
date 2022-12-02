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
	int A, B, K;
	cin >> A >> B >> K;
	for (int i = A; i < min(A + K, B + 1); ++i)
		cout << i << endl;
	for (int i = max(A + K, B - K + 1); i <= B; ++i)
		cout << i << endl;
}