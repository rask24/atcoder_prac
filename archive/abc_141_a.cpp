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

int main(void)
{
	string S;
	cin >> S;
	cout << ((S == "Sunny") ? "Cloudy" : ((S == "Cloudy") ? "Rainy" : "Sunny")) << endl;
}