#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string S;
	cin >> S;
	int ans = 0;
	for (int i = 0; i < N; ++i) {
		while (i < N - 1 && S[i + 1] == S[i])
			++i;
		++ans;
	}
	cout << ans << endl;
}