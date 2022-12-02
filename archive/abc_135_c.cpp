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
	vector<int> A(N + 1), B(N);
	for (int i = 0; i < N + 1; ++i)
		cin >> A[i];
	for (int i = 0; i < N; ++i)
		cin >> B[i];
	long long ans = 0;
	int tmp;
	for (int i = 0; i < N; ++i)
	{
		tmp = B[i];
		ans += min(A[i], B[i]);
		B[i] = max(0, B[i] - A[i]);
		A[i] = max(0, A[i] - tmp);

		ans += min(A[i + 1], B[i]);
		tmp = B[i];
		B[i] = max(0, B[i] - A[i + 1]);
		A[i + 1] = max(0, A[i + 1] - tmp);
	}
	cout << ans << endl;
}