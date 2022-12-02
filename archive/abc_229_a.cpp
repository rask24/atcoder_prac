#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
using namespace std::literals;

const long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b)
{
	if (a > b)
		a = b;
}

template<class T> void chmax(T& a, T b)
{
	if (a < b)
		a = b;
}

int main(void)
{
	string S1, S2;
	cin >> S1 >> S2;

	if (S1 == "#." and S2 == ".#")
		cout << "No" << endl;
	else if (S1 == ".#" and S2 == "#.")
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}