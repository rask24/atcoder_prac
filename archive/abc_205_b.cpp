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
using namespace std;
using namespace std::literals;

int main(void)
{
	int N;
	cin >> N;
	vector<int> B(N + 1);
	for (int i = 1; i <= N; ++i)
	{
		int tmp;
		cin >> tmp;
		++B[tmp];
	}
	for (int i = 1; i <= N; ++i)
	{
		if (B[i] == 0)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}