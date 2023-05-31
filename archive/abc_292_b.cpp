#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	vector<int> S(N + 1, 2);
	while (Q--) {
		int T, x;
		cin >> T >> x;
		if (T == 3) {
			cout << ((S[x] > 0) ? "No" : "Yes") << endl;
		} else {
			S[x] -= T;
		}
	}
}