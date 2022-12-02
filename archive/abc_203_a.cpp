#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> A(3);
	cin >> A[0] >> A[1] >> A[2];
	sort(A.begin(), A.end());
	if (A[0] != A[1] and A[1] != A[2])
		cout << 0 << endl;
	else if (A[0] == A[1])
		cout << A[2] << endl;
	else
		cout << A[0] << endl;
}