#include <bits/stdc++.h>
using namespace std;

long long digit(long long N)
{
	long long ret = 0;
	while (N) {
		++ret;
		N /= 10;
	}
	return ret;
}

int main()
{
	long long A, B, X;
	cin >> A >> B >> X;
	long long D = digit(X);
	long long ans = 0;
	for (long long d = 1; d <= D; ++d) {
		if (digit((X - B * d) / A) == d)
			ans = max(ans, (X - B * d) / A);
		else {
			long long tmp = 0;
			for (int i = 0; i < d; ++i)
				tmp = tmp * 10 + 9;
			if (tmp <= X && tmp <= (X - B * d) / A)
				ans = max(ans, tmp);
		}
	}
	cout << min(ans, 1000000000LL) << endl;
}