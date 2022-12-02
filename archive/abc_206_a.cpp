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
	int N;
	cin >> N;
	int val = 1.08 * N;
	if (val < 206)
		cout << "Yay!" << endl;
	else if (val == 206)
		cout << "so-so" << endl;
	else
		cout << ":(" << endl;
}