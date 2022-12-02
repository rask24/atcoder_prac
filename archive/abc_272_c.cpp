#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<long long> A, B;
	for (int i = 0; i < N; ++i) {
		long long t;
		cin >> t;
		if (t % 2 == 0)
			A.push_back(t);
		else
			B.push_back(t);
	}
	sort(A.begin(), A.end(), greater<long long>());
	sort(B.begin(), B.end(), greater<long long>());
	
	if (A.size() > 1 && B.size() > 1) {
		cout << max(A[0] + A[1], B[0] + B[1]) << endl;
	} else if (A.size() > 1) {
		cout << A[0] + A[1] << endl;
	} else if (B.size() > 1) {
		cout << B[0] + B[1] << endl;
	} else {
		cout << -1 << endl;
	}
}