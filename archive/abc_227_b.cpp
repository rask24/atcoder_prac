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
	int N;
	cin >> N;
	vector<int> S(N);
	for (int i = 0; i < N; ++i)
		cin >> S[i];
	
	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		int a = 1;
		bool exist = false;
		while (a < S[i])
		{
			int b = 1;
			while (4 * a * b + 3 * a + 3 * b <= S[i])
			{
				if (4 * a * b + 3 * a + 3 * b == S[i])
				{
					exist = true;
					break;
				}
				++b;
			}
			if (exist)
			{
				++count;
				break;
			}
			++a;
		}
	}
	cout << N - count << endl;
}