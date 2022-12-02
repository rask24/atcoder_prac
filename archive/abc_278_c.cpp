#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, Q;
	cin >> N >> Q;
	set<pair<int, int>> s;
	while (Q--) {
		int T, A, B;
		cin >> T >> A >> B;
		if (T == 1) {
			s.insert({A, B});
		} else if (T == 2) {
			s.erase({A, B});
		} else if (T == 3) {
			if (s.count({A, B}) && s.count({B, A})) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}
}