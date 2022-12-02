#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	int N = S.size();
	for (int i = 0; i < N; ++i) {
		bool rot = true;
		for (int j = 0; j < S.size() / 2; ++j) {
			if (S[j] != S[S.size() - j - 1])
				rot = false;
		}
		if (rot) {
			cout << "Yes" << endl;
			return 0;
		}
		S = '0' + S;
	}
	cout << "No" << endl;
}