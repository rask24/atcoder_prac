#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int p = 1;
	for (int i = 0; i < M; ++i) {
		p *= 2;
	}
	cout << (100 * N + 1800 * M) * p << endl;
}