#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<long long> M(200, 0);
	for (int i = 0; i < N; ++i) {
		int a;
		cin >> a;
		++M[a % 200];
	}
	long long ans = 0;
	for (int i = 0; i < 200; ++i) {
		if (M[i] > 1) {
			ans += (M[i] * (M[i] - 1)) / 2;
		}
	}
	cout << ans << endl;
}
