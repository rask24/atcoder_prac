#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N, K;
	cin >> N >> K;
	unsigned long long ans = 1;
	for (int i = 0; i < N; ++i)
		ans *= (i == 0) ? K : (K - 1);
	cout << ans << endl;
}