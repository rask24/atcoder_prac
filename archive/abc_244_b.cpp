#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int N;
	string S;
	cin >> N >> S;

	pair<int, int> p(0, 0);
	int dir = 0;
	for (int i = 0; i < S.length(); ++i)
	{
		if (S[i] == 'S')
		{
			if (dir == 0)
				++p.first;
			else if (dir == 1)
				--p.second;
			else if (dir == 2)
				--p.first;
			else
				++p.second;
		}
		else if (S[i] == 'R')
			dir = (dir + 1) % 4;
	}
	cout << p.first << " " << p.second << endl;
}