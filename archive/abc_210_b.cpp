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
#include <climits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int N;
	string S;
	cin >> N >> S;
	cout << ((S.find('1') % 2 == 0) ? "Takahashi" : "Aoki") << endl;
}