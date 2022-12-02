#include <bits/stdc++.h>
using namespace std;

int N, M;
int a, b, c;

void solve(int n, vector<int> v)
{
	if (n == N) {
		for (int i = 0; i < N; ++i)
			cout << v[i] << " ";
		cout << endl;
		return ;
	}
	int start = (n == 0) ? 1 : (v[n - 1] + 1);
	if (start > M)
		return ;
	for (int i = start; i <= M; ++i) {
		v[n] = i;
		solve(n + 1, v);
	}
}

int main()
{
	cin >> N >> M;
	vector<int> v(N, 0);
	solve(0, v);
}