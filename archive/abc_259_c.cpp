#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S, T;
	cin >> S >> T;
	vector<pair<char, int>> cs, ct;
	for (int i = 0; i < S.size(); ++i) {
		cs.push_back(make_pair(S[i], 1));
		while (i < S.size() - 1 and S[i] == S[i + 1]) {
			++cs.back().second;
			++i;
		}
	}
	for (int i = 0; i < T.size(); ++i) {
		ct.push_back(make_pair(T[i], 1));
		while (i < T.size() - 1 and T[i] == T[i + 1]) {
			++ct.back().second;
			++i;
		}
	}

	bool ans = true;
	if (cs.size() != ct.size())
		ans = false;
	else {
		for (int i = 0; i < cs.size(); ++i) {
			if (cs[i].first != ct[i].first)
				ans = false;
			if (ct[i].second < cs[i].second)
				ans = false;
			if (cs[i].second == 1 and ct[i].second > 1)
				ans = false;
		}
	}
	cout << ((ans) ? "Yes" : "No") << endl;
}