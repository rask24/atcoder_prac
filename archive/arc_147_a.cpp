#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	map<int, int> m;
	for (int i = 0; i < N; ++i) {
		int a;
		cin >> a;
		++m[a];
	}
	long long ans = 0;
	while (m.size() > 1) {
		int front = m.begin()->first;
		int back = m.rbegin()->first;
		if (back % front != 0)
			++m[back % front];
		if (--m[back] == 0)
			m.erase(back);
		++ans;
	}
	cout << ans << endl;
}