#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
using namespace std;

bool is_prime(int n)
{
	if (n < 2)
		return false;
	if (n == 2)
		return true;

	int i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return false;
		++i;
	}
	return true;
}

int main()
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	for (int i = A; i <= B; ++i)
	{
		bool exist = false;
		for (int j = C; j <= D; ++j)
		{
			exist |= is_prime(i + j);
		}
		if (!exist)
		{
			cout << "Takahashi" << endl;
			return 0;
		}
	}
	cout << "Aoki" << endl;
}