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
	long long X;
	cin >> X;
	if (X < 0 and X % 10 != 0)
		cout << X / 10 - 1 << endl;	
	else
		cout << X / 10 << endl;
}