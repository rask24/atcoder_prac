#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, A, B;
	cin >> N >> A >> B;
	cout << ((N < 5) ? N * B : 5 * B + (N - 5) * A) << endl;
}