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

	for (auto i = m.rbegin(); i != m.rend(); ++i) {
		cout << i->second << endl;
	}
	for (int i = 0; i < N - m.size(); ++i) {
		cout << 0 << endl;
	}
}