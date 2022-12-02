#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	priority_queue<long long> que;
	for (int i = 0; i < N; ++i) {
		long long A;
		cin >> A;
		que.push(A);
	}
	for (int i = 0; i < M; ++i) {
		long long T = que.top() / 2;
		que.pop();
		que.push(T);
	}
	long long ans = 0;
	while (!que.empty()) {
		ans += que.top();
		que.pop();
	}
	cout << ans << endl;
}