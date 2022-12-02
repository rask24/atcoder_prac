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
	long long H;
	cin >> H;
	cout << setprecision(15) << sqrt(H * (12800000LL + H)) << endl;
}