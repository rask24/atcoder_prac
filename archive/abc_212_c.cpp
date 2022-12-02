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
#include <climits>
using namespace std;
using namespace std::literals;

template <class T> void chmin(T &a, T b)
{
	if (b < a)
		a = b;
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N), B(M);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	for (int i = 0; i < M; ++i)
		cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int res = INT_MAX / 2;
	for (int i = 0; i < N; ++i)
	{
		auto iter = lower_bound(B.begin(), B.end(), A[i]);
		chmin(res, abs(A[i] - *iter));
		if (B.begin() < iter)
			chmin(res, abs(A[i] - *(iter - 1)));
	}
	cout << res << endl;
}