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
	int n;
	cin >> n;

	if (n == 1 or n >= 5)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}