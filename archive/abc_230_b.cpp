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
	int j = 0;

	if (S[0] == 'x')
	{
		++j;
		if (S[1] == 'o')
			++j;
	}
	for (int i = 0; i < S.size(); ++i)
	{
		if(!(
			((i + j) % 3 == 0 and S[i] == 'o') or
			((i + j) % 3 == 1 and S[i] == 'x') or
			((i + j) % 3 == 2 and S[i] == 'x')
		))
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}