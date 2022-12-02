#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	int Q;
	cin >> Q;
	bool is_rev = false;
	string head = "", tail = "";
	while (Q--) {
		int T;
		cin >> T;
		if (T == 1) {
			is_rev = !is_rev;
		} else {
			int F;
			char C;
			cin >> F >> C;
			if ((F == 1 && !is_rev) || (F == 2 && is_rev)) {
				head.push_back(C);
			} else {
				tail.push_back(C);
			}
		}
	}
	reverse(head.begin(), head.end());
	S = head + S + tail;
	if (is_rev)
		reverse(S.begin(), S.end());
	cout << S << endl;
}