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

int main(void)
{
	int H, W;
	cin >> H >> W;
	vector<string> S(H);
	for (int i = 0; i < H; ++i)
		cin >> S[i];
	
	pair<int, int> p1, p2;
	p1 = p2 = make_pair(-1, -1);
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			if (S[i][j] == 'o')
			{
				if (p1.first != -1)
				{
					p2.first = i;
					p2.second = j;
				}
				else
				{
					p1.first = i;
					p1.second = j;
				}
			}
		}
	}
	cout << abs(p1.first - p2.first) + abs(p1.second - p2.second) << endl;
}