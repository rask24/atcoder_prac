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
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	sort(A.begin(), A.end());
	for (int i = 0; i < N - 1; ++i)
	{
		if (A[i] == A[i + 1])
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}