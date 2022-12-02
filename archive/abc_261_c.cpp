#include <bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<string, int> m;
	int N;
	cin >> N;
	vector<string> S(N);
	for (int i = 0; i < N; ++i)
		cin >> S[i];
	for (int i = 0; i < N; ++i) {
		if (m.find(S[i]) == m.end()) {
			cout << S[i] << endl;
			++m[S[i]];
		}
		else {
			cout << S[i] + "(" + to_string(m[S[i]]) + ")" << endl;
			++m[S[i]];
		}
	}
}