#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	string S;
	cin >> N >> S;
	string T, U;
	T = S.substr(0, N / 2);
	U = S.substr(N / 2, N / 2);
	cout << ((N % 2 == 0 and T == U) ? "Yes" : "No") << endl;
}