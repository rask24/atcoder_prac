#include <bits/stdc++.h>
using namespace std;

long long ans = 0;
int N, M, Q;
vector<int> a, b, c, d;

void solve(int n, vector<int> v)
{
	if (n == N) {
		long long tmp = 0;
		for (int i = 0; i < Q; ++i) {
			if (v[b[i] - 1] - v[a[i] - 1] == c[i])
				tmp += d[i];
		}
		ans = max(ans, tmp);
		return;
	}
	int start = (n > 0) ? v[n - 1] : 1;
	for (int i = start; i <= M; ++i) {
		v[n] = i;
		solve(n + 1, v);
	}
}

int main()
{
	cin >> N >> M >> Q;
	a.resize(Q), b.resize(Q), c.resize(Q), d.resize(Q);
	for (int i = 0; i < Q; ++i)
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	vector<int> v(N);
	solve(0, v);
	cout << ans << endl;
}