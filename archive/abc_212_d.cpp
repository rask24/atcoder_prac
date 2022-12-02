#include <bits/stdc++.h>
using namespace std;

int main()
{
	int Q;
	cin >> Q;
	map<long long, long long> m;
	long long offset = 0;
	while (Q--) {
		long long T, X;
		cin >> T;
		if (T == 1) {
			cin >> X;
			X -= offset;
			++m[X];
		} else if (T == 2) {
			cin >> X;
			offset += X;
		} else {
			auto iter = m.begin();
			cout << (*iter).first + offset << endl;
			--(*iter).second;
			if ((*iter).second == 0) {
				m.erase(iter);
			}
		}
	}
}
