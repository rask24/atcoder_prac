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
	int N, K, Q;
	cin >> N >> K >> Q;
	vector<int> A(K + 1);
	for (int i = 1; i <= K; ++i)
		cin >> A[i];
	for (int i = 0; i < Q; ++i)
	{
		int L;
		cin >> L;
		if (A[L + 1] == A[L] + 1 or A[L] == N)
			continue;
		++A[L];
	}
	for (int j = 1; j <= K; ++j)
		cout << A[j] << " ";
	cout << endl;
}