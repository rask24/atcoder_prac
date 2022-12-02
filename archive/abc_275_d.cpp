#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, long long> m;

long long f(long long N)
{
	if (N == 0)
		return 1;
	if (m.find(N) != m.end())
		return m[N];
	return (m[N] = f(N / 2) + f(N / 3));
}

int main()
{
	long long N;
	cin >> N;
	cout << f(N) << endl;
}