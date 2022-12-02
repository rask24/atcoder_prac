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
	long long N, A, B, P, Q, R, S;
	cin >> N >> A >> B >> P >> Q >> R >> S;

	for (long long i = P; i <= Q; ++i)
	{
		for (long long j = R; j <= S; ++j)
		{
			if (i - j == A - B or i + j == A + B)
				cout << "#";
			else
				cout << ".";
		}
		cout << endl;
	}
}