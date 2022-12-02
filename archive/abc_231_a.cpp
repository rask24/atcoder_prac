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
	int D;
	cin >> D;
	double x =  D / 100.0;
	cout << setprecision(12) << x << endl;
}