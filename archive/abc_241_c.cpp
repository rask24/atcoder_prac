#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
#include <cmath>
using namespace std;

bool solve(vector<string> m)
{
	int count;

	for (int i = 0; i < m.size(); ++i)
	{
		for (int j = 0; j < m.size() - 5; ++j)
		{
			count = 0;
			for (int k = 0; k < 6; ++k)
			{
				if (m[i][j + k] == '#')
					++count;
			}
			if (count >= 4)
				return true;
		}
	}

	for (int i = 0; i < m.size() - 5; ++i)
	{
		for (int j = 0; j < m.size(); ++j)
		{
			count = 0;
			for (int k = 0; k < 6; ++k)
			{
				if (m[i + k][j] == '#')
					++count;
			}
			if (count >= 4)
				return true;
		}
	}

	for (int i = 0; i < m.size() - 5; ++i)
	{
		for (int j = 0; j < m.size() - 5; ++j)
		{
			count = 0;
			for (int k = 0; k < 6; ++k)
			{
				if (m[i + k][j + k] == '#')
					++count;
			}
			if (count >= 4)
				return true;
		}
	}

	for (int i = 0; i < m.size() - 5; ++i)
	{
		for (int j = 5; j < m.size(); ++j)
		{
			count = 0;
			for (int k = 0; k < 6; ++k)
			{
				if (m[i + k][j - k] == '#')
					++count;
			}
			if (count >= 4)
				return true;
		}
	}
	return false;
}

int main()
{
	int N;
	cin >> N;
	vector<string> m(N);
	for (int i = 0; i < N; ++i)
		cin >> m[i];

	if (solve(m))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}