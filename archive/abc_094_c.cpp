#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<long long> X(N), Y(N);
	for (int i = 0; i < N; ++i) {
		cin >> X[i];
		Y[i] = X[i];
	}
	sort(X.begin(), X.end());
	long long l = X[N / 2 - 1], r = X[N / 2];
	for (int i = 0; i < N; ++i) {
		if (Y[i] <= l)
			cout << r << endl;
		else
			cout << l << endl;
	}
}