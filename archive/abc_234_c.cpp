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
	unsigned long long K;
	cin >> K;

	string bit;
	for (int i = 0; i < 64; ++i)
	{
		if (K & (1LL << i))
			bit = "2" + bit;
		else
			bit = "0" + bit;
	}
	cout << bit.substr(bit.find('2')) << endl;
}