#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> b(N + 1, 0);
	int tmp;
	for (int i = 0; i < 4 * N - 1; ++i)
	{
		cin >> tmp;
		++b[tmp];
	}
	for (int i = 1; i <= N; ++i)
	{
		if (b[i] == 3)
		{
			cout << i << endl;
			return 0;
		}
	}
}
