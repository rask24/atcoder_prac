#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<bool> hd(12, false);
	long long ans = 1;
	for (int i = 0; i < 11; ++i) {
		ans *= (N - 1 - i);
		for (int j = 2; j <= 11; ++j) {
			if (!hd[j] and ans % j == 0) {
				ans /= j;
				hd[j] = true;
			}
		}
	}
	cout << ans << endl;
}