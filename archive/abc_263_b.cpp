#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> P(N + 1, 0);
	for (int i = 2; i <= N; ++i)
		cin >> P[i];
	int cur = N;
	int ans = 0;
	while (cur != 1) {
		cur = P[cur];
		++ans;
	}
	cout << ans << endl;
}