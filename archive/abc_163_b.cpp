#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int sum = 0;
	for (int i = 0; i < M; ++i) {
		int a;
		cin >> a;
		sum += a;
	}
	cout << ((sum > N) ? -1 : N - sum) << endl;
}