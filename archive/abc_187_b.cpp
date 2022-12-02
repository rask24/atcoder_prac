#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> x(N), y(N);
	for (int i = 0; i < N; ++i)
		 cin >> x[i] >> y[i];
	long long ans = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			if (abs(x[j] - x[i]) >= abs(y[j] - y[i]))
				++ans;
		}
	}
	cout << ans << endl;
}