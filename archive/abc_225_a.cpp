#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	string S;
	cin >> S;
	sort(S.begin(), S.end());
	int ch = 1;
	if (S[0] != S[1])
		++ch;
	if (S[1] != S[2])
		++ch;
	if (ch == 1)
		cout << 1 << endl;
	else if (ch == 2)
		cout << 3 << endl;
	else
		cout << 6 << endl;
}