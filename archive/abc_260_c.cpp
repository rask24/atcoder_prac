#include <bits/stdc++.h>
using namespace std;

int N, X, Y;
long long red(int l);
long long blue(int l);

long long red(int l)
{
	if (l == 1)
		return 0;
	return red(l - 1) + blue(l) * X;
}

long long blue(int l)
{
	if (l == 1)
		return 1;
	return red(l - 1) + blue(l - 1) * Y;
}

int main()
{
	cin >> N >> X >> Y;
	cout << red(N) << endl;
}