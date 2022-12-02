#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	int ans = 0;
	for (int i = 0; i < N; ++i) {
		int h = A[i];
		for (int j = i; j < N; ++j) {
			h = min(h, A[j]);
			ans = max(ans, h * (j - i + 1));
		}
	}
	cout << ans << endl;
}