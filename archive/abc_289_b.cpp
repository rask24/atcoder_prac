#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	stack<int> st;
	vector<int> a(M);
	for (int i = 0; i < M; ++i)
		cin >> a[i];
	int p = 0;
	for (int i = 1; i <= N; ++i) {
		st.push(i);
		if (p < M and i == a[p]) {
			++p;
		} else {
			while (!st.empty()) {
				cout << st.top() << ' ';
				st.pop();
			}
		}
	}
}