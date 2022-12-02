#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	map<string, int> m;
	for (int i = 0; i < N; ++i) {
		string S;
		bool ex = false;
		cin >> S;
		if (S[0] == '!') {
			S = S.substr(1, S.size() - 1);
			ex = true;
		}
		m[S] |= (ex) ? 0b10 : 0b01;
	}
	for (auto i : m) {
		if (i.second == 0b11) {
			cout << i.first << endl;
			return 0;
		}
	}
	cout << "satisfiable" << endl;
}