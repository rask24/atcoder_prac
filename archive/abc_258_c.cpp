#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, Q;
	string S;
	cin >> N >> Q >> S;
	int start = 0;
	while (Q--)
	{
		int t, x;
		cin >> t >> x;
		if (t == 1)
			start = (start - x + N) % N;
		else
			cout << S[(start + x - 1 + N) % N] << endl;
	}
}