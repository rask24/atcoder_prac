#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<long long> A(N);
	for (long long i = 0; i < N; ++i)
		cin >> A[i];
	sort(A.begin(), A.end());
	long long Q;
	cin >> Q;
	while (Q--) {
		long long b;
		cin >> b;
		long long key = lower_bound(A.begin(), A.end(), b) - A.begin();
		if (key == 0)
			cout << A[0] - b << endl;
		else if (key == N)
			cout << b - A[N - 1] << endl;
		else
			cout << min(abs(A[key] - b), abs(A[key - 1] - b)) << endl;
	}
}