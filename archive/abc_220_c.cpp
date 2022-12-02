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
	long long N, X, sum;
	cin >> N;
	vector<long long> A(N);
	sum = 0;
	for (long long i = 0; i < N; ++i)
	{
		cin >> A[i];
		sum += A[i];
	}
	cin >> X;

	long long k = 0;
	k = (X / sum) * N;
	if (X % sum == 0)
	{
		cout << k + 1 << endl;
		return 0;
	}
	long long sub = 0;
	for (int i = 0; i < N; ++i)
	{
		sub += A[i];
		if (sub > X % sum)
		{
			k += i;
			break;
		}
	}
	cout << k + 1 << endl;
}