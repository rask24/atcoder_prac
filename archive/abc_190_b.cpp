#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, S, D;
	cin >> N >> S >> D;
	vector<int> X(N), Y(N);
	for (int i = 0; i < N; ++i)
		 cin >> X[i] >> Y[i];
	for (int i = 0; i < N; ++i) {
		if (X[i] < S and Y[i] > D) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}