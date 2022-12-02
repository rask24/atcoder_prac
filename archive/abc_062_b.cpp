#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <climits>
#include <sstream>
using namespace std;
using namespace std::string_literals;

int main(void)
{
	int H, W;
	cin >> H >> W;
	vector<vector<char>> a(H + 2, vector<char> (W + 2));
	for (int i = 0; i < H + 2; ++i)
	{
		for (int j = 0; j < W + 2; ++j)
		{
			if (i == 0 or i == H + 1 or j == 0 or j == W + 1)
				a[i][j] = '#';
			else
				cin >> a[i][j];
		}
	}
	for (int i = 0; i < H + 2; ++i)
	{
		for (int j = 0; j < W + 2; ++j)
			cout << a[i][j];
		cout << endl;
	}
}