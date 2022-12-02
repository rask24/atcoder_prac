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
	string S;
	cin >> S;
	for (int i = 0; i < 6 / S.size(); ++i)
		cout << S;
	cout << endl;
}