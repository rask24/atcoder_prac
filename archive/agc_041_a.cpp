#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long N, A, B;
	cin >> N >> A >> B;
	cout << (((B - A) % 2 == 0) ? (B - A) / 2 : min(A - 1, N - B) + 1 + (B - A - 1) / 2) << endl;
}