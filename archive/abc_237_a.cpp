#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	if (-(1LL << 31) <= N and N < (1LL << 31))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}