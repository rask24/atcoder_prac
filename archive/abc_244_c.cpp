#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> b(2 * N + 2, 0);

	int input;
	for (int j = 0; j < N + 1; ++j)
	{
		for (int i = 1; i <= 2 * N + 1; ++i)
		{
			if (b[i] == 0)
			{
				cout << i << endl;
				++b[i];
				break;
			}
		}
		cin >> input;
		++b[input];
	}
}