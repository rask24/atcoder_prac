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
	int H, W;
	cin >> H >> W;
	vector<vector<int>> A(H, vector<int> (W));
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			for (int k = i + 1; k < H; ++k)
			{
				for (int l = j + 1; l < W; ++l)
				{
					if (A[i][j] + A[k][l] > A[i][l] + A[k][j])
					{
						cout << "No" << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << "Yes" << endl;
}