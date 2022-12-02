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

template<class T> void chmax(T &a, T b)
{
	if (a < b)
		a = b;
}

int main(void)
{
	int N, K, m;
	cin >> N >> K;
	vector<int> A(N + 1), B(N + 1);
	m = 0;
	for (int i = 1; i <= N; ++i)
	{
		cin >> A[i];
		chmax(m, A[i]);
	}
	for (int i = 1; i <= K; ++i)
		cin >> B[i];

	for (int i = 1; i <= N; ++i)
	{
		if (A[i] == m)
		{
			for (int j = 1; j <= K; ++j)
			{
				if (B[j] == i)
				{
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
}