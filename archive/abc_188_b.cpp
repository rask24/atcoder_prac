#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N), B(N);
	for (int i = 0; i < N; ++i)
		 cin >> A[i];
	for (int i = 0; i < N; ++i)
		 cin >> B[i];
	long long ip = 0;
	for (int i = 0; i < N; ++i)
		ip += A[i] * B[i];
	cout << ((ip == 0) ? "Yes" : "No") << endl;
}