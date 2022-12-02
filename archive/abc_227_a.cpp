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
	int N, K, A;
	cin >> N >> K >> A;
	if ((A + K - 1) % N == 0)
		cout << N << endl;
	else
		cout << (A + K - 1) % N << endl;
}