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
	int N;
	cin >> N;
	vector<vector<int>> A(N, vector<int> (N));

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			if (j == 0 or j == i)
				A[i][j] = 1;
			else
				A[i][j] = A[i - 1][j - 1] + A[i - 1][j];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}