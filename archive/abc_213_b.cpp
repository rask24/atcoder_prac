#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <set>
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
	vector<pair<int, int>> A(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> A[i].first;
		A[i].second = i;
	}
	sort(A.begin(), A.end());
	cout << A[A.size() - 2].second + 1 << endl;
}