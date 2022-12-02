#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> B(2001, 0);
	int tmp;
	for (int i = 0; i < N; ++i)
	{
		cin >> tmp;
		++B[tmp];
	}
	for (int i = 0; i < 2001; ++i)
	{
		if (B[i] == 0)
		{
			cout << i << endl;
			break;
		}
	}
}