#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long ans = 0;
	for (long long i = 1; i <= N; ++i) {
		long long k = i;
		for (long long d = 2; d * d <= k; ++d) {
			while (k % (d * d) == 0) {
				k /= d * d;	
			}
		}
		for (long long d = 1; k * d * d <= N; ++d) {
			++ans;
		}
	}
	cout << ans << endl;
}