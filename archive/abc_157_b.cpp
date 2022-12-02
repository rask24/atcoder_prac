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
	vector<vector<pair<int, bool>>> A(3, vector<pair<int, bool>> (3, make_pair(0, false)));
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
			cin >> A[i][j].first;
	}
	int N;
	cin >> N;
	for (int k = 0; k < N; ++k)
	{
		int tmp;
		cin >> tmp;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (A[i][j].first == tmp)
				{
					A[i][j].second = true;
				}
			}
		}
	}
	if (
		(A[0][0].second && A[0][1].second && A[0][2].second) or
		(A[1][0].second && A[1][1].second && A[1][2].second) or
		(A[2][0].second && A[2][1].second && A[2][2].second) or
		(A[0][0].second && A[1][0].second && A[2][0].second) or
		(A[0][1].second && A[1][1].second && A[2][1].second) or
		(A[0][2].second && A[1][2].second && A[2][2].second) or
		(A[0][0].second && A[1][1].second && A[2][2].second) or
		(A[0][2].second && A[1][1].second && A[2][0].second)
	)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}