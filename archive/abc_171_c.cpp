#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long K = 1, ex = 26;
	while (26 * (ex - 1) / 25 < N) {
		++K;
		ex *= 26;
	}
	long long A = N - (26 * (ex / 26 - 1)) / 25 - 1;
	string ans = "";
	for (int i = 0; i < K; ++i) {
		ans = (char)('a' + A % 26) + ans;
		A /= 26;
	}
	cout << ans << endl;
}