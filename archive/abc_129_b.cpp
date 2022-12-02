#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> W(N), S(N + 1, 0);
	for (int i = 0; i < N; ++i) {
		cin >> W[i];
		S[i + 1] = S[i] + W[i];
	}
	int ans = 1e9;
	for (int i = 0; i < N; ++i) {
		ans = min(ans, abs(S[i + 1] - (S[N] - S[i + 1])));
	}
	cout << ans << endl;
}