#include <bits/stdc++.h>
using namespace std;

int main()
{
	int X, Y, N;
	cin >> X >> Y >> N;
	if (3 * X < Y) {
		cout << X * N << endl;
	} else {
		cout << (N / 3) * Y + (N % 3) * X << endl;
	}
}