#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (b - a == 1 || b - a == 9)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}