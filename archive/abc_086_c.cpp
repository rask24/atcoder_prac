#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> T(N + 1, 0), X(N + 1, 0), Y(N + 1, 0);
	for (int i = 1; i <= N; ++i)
		cin >> T[i] >> X[i] >> Y[i];
	for (int i = 1; i <= N; ++i) {
		int dist = abs(X[i] - X[i - 1]) + abs(Y[i] - Y[i - 1]);
		if (!(T[i] - T[i - 1] >= dist && (T[i] - T[i - 1] - dist) % 2 == 0)) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}