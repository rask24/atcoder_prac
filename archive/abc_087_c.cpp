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
#include <cctype>
#include <sstream>
using namespace std;
using namespace std::string_literals;



int main(void)
{
	int N;
	cin >> N;
	vector<vector<int>> A(2, vector<int> (N));
	for (int i = 0; i < N; ++i)
		cin >> A[0][i];
	for (int i = 0; i < N; ++i)
		cin >> A[1][i];
	int ans = 0;
	for (int i = 0; i < N; ++i)
	{
		int sum = 0;
		int k = 0;
		for (int j = 0; j < N; ++j)
		{
			if (j == i)
			{
				sum += A[k][j];
				++k;
			}
			sum += A[k][j];
		}
		ans = max(ans, sum);
	}
	cout << ans << endl;
}