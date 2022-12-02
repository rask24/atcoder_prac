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
#include <cctype>
#include <sstream>
using namespace std;
using namespace std::string_literals;

const size_t tmp = std::string::npos;

int main(void)
{
	string s;
	cin >> s;
	cout << s.rfind('Z') - s.find('A') + 1 << endl;
}