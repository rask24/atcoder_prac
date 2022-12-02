#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;
	X *= 100;
	long long sum = 0;
	int key = -1;
	for (int i = 0; i < N; ++i) {
		int v, p;
		cin >> v >> p;
		sum += v * p;
		if (key == -1 and sum > X)
			key = i + 1;
	}
	cout << key << endl;
}