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

	for (int j = 0; j < W; ++j)
	{
		for (int i = 0; i < H; ++i)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}