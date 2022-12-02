#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
	int ret = 0;
	while (n)
	{
		ret += n % 10;
		n /= 10;
	}
	return ret;
}

int main(void)
{
	int N, A, B;
	cin >> N >> A >> B;
	int ans = 0;
	for (int i = 1; i <= N; ++i)
	{
		int sum = digit_sum(i);
		if (A <= sum and sum <= B)
			ans += i;
	}
	cout << ans << endl;
}