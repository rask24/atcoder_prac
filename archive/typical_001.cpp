#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int N, L, K;
vector<int> A;

bool is_ok(int M)
{
	int cur = 0;
	int cnt = 0;
	for (int i = 0; i < N; ++i) {
		if (A[i] - cur >= M && L - A[i] >= M) {
			++cnt;
			cur = A[i];
		}
	}
	return cnt >= K;
}

int solve()
{
	int left = -1;
	int right = L + 1;

	while (right - left > 1) {
		int mid = left + (right - left) / 2;
		if (is_ok(mid))
			left = mid;
		else
			right = mid;
	}
	return left;
}

int main()
{
	cin >> N >> L >> K;
	A.resize(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	cout << solve() << endl;
}