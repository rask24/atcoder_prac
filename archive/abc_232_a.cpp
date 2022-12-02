#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;
using namespace std::literals;

int main()
{
	string S;
	cin >> S;
	cout << (S[0] - '0') * (S[2] - '0') << endl;
}