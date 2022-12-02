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
	string S;
	cin >> S;
	for (int i = S.size(); i < 3; ++i)
		S = "0" + S;
	if (stoi(S) >= 42)
		++S[2];
	if (S[2] > '9')
	{
		S[2] = '0';
		++S[1];
	}
	cout << "AGC"s << S << endl;
}