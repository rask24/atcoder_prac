#include <bits/stdc++.h>
using namespace std;

long long sum(long long n)
{
	if (n < 0)
		return 0;
	return n * (n + 1) / 2;
}

int main()
{
	string S;
	cin >> S;
	long long ans = 0;
	long long i = 0;
	while (i < S.size()) {
		long long g = 0, l = 0;
		while (S[i] == '<') {
			++g, ++i;
		}
		while (S[i] == '>') {
			++l, ++i;
		}
		ans += sum(min(g, l) - 1) + sum(max(g, l));
	}
	cout << ans << endl;
}