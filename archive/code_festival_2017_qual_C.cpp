#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N, A, all, odd;
	cin >> N;
	all = odd = 1;
	for (int i = 0; i < N; ++i)
	{
		cin >> A;
		all *= 3;
		odd *= (A % 2 == 0) ? 2 : 1;
	}
	cout << all - odd << endl;
}