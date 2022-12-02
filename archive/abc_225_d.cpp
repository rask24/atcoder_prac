#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, Q;
	cin >> N >> Q;
	vector<int> F(N, -1), B(N, -1);
	while (Q--) {
		int T, x, y;
		cin >> T;
		if (T == 1) {
			cin >> x >> y;
			--x, --y;
			B[x] = y;
			F[y] = x;
		} else if (T == 2) {
			cin >> x >> y;
			--x, --y;
			B[x] = -1;
			F[y] = -1;
		} else {
			cin >> x;
			--x;
			while (F[x] != -1) {
				x = F[x];
			}
			vector<int> ans;
			while (x != -1) {
				ans.push_back(x);
				x = B[x];
			}
			cout << ans.size() << " ";
			for (int i : ans)
				cout << i + 1 << " ";
			cout << endl;
		}
	}
}