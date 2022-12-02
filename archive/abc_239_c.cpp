#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
#include <cmath>
using namespace std;

pair<int, int> translation(pair<int, int> p, int a, int b)
{
	p.first += a;
	p.second += b;
	return p;
}

int main()
{
	pair<int, int> p1, p2;
	cin >> p1.first >> p1.second >> p2.first >> p2.second;

	vector<pair<int, int>> v1(8), v2(8);
	v1[0] = translation(p1, 1, 2);
	v1[1] = translation(p1, 1, -2);
	v1[2] = translation(p1, -1, 2);
	v1[3] = translation(p1, -1, -2);
	v1[4] = translation(p1, 2, 1);
	v1[5] = translation(p1, 2, -1);
	v1[6] = translation(p1, -2, 1);
	v1[7] = translation(p1, -2, -1);

	v2[0] = translation(p2, 1, 2);
	v2[1] = translation(p2, 1, -2);
	v2[2] = translation(p2, -1, 2);
	v2[3] = translation(p2, -1, -2);
	v2[4] = translation(p2, 2, 1);
	v2[5] = translation(p2, 2, -1);
	v2[6] = translation(p2, -2, 1);
	v2[7] = translation(p2, -2, -1);

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (v1[i] == v2[j])
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
}