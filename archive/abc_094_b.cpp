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
#include <sstream>
using namespace std;
using namespace std::literals;

int main(void)
{
	int N, M, X;
	cin >> N >> M >> X;
	vector<int> A(M);
	for (int i = 0; i < M; ++i)
		cin >> A[i];
	int left = lower_bound(A.begin(), A.end(), X) - A.begin();
	cout << min(left, M - left) << endl;
}