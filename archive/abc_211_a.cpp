#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int A, B;
	cin >> A >> B;
	cout << setprecision(12) << (double)(A - B) / 3.0 + B << endl;
}