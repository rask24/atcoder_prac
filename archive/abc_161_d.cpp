#include <bits/stdc++.h>
using namespace std;

vector<long long> LN;

void solve(long long n)
{
	LN.push_back(n);
	if (n > 1e9)
		return ;
	if (n == 0) {
		for (int i = 1; i <= 9; ++i)
			solve(i);
	} else {
		if (0 < (n % 10))
			solve((n * 10) + (n % 10 - 1));
		solve((n * 10) + (n % 10));
		if ((n % 10) < 9)
			solve((n * 10) + (n % 10 + 1));
	}
}

int main()
{
	int K;
	cin >> K;
	solve(0);
	sort(LN.begin(), LN.end());
	cout << LN[K] << endl;
}