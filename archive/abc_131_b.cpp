#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, L;
	cin >> N >> L;
	if (L >= 0)
		cout << L * (N - 1) + N * (N - 1) / 2 << endl;
	else if (L + N - 1 >= 0)
		cout << L * N + N * (N - 1) / 2 << endl;
	else
		cout << L * (N - 1) + (N - 1) * (N - 2) / 2 << endl;
}