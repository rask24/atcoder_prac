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
	long long K;
	string A, B;
	cin >> K >> A >> B;
	long long a, b;
	a = b = 0;
	for (long long i = 0; i < A.size(); ++i)
		a = a * K + A[i] - '0';
	for (long long i = 0; i < B.size(); ++i)
		b = b * K + B[i] - '0';
	cout << a * b << endl;
}