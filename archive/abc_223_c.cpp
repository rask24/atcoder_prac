#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<long double> A(N), B(N);
	for (int i = 0; i < N; ++i)
		 cin >> A[i] >> B[i];
	
	long double T = 0;
	for (int i = 0; i < N; ++i) {
		T += A[i] / B[i];
	}
	T /= 2.0;
	long double L = 0;
	for (int i = 0; i < N; ++i) {
		if (T > A[i] / B[i]) {
			L += A[i];
			T -= A[i] / B[i];
		} else {
			L += T * B[i];
			break;
		}
	}
	cout << setprecision(20) << L << endl;
}