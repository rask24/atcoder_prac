#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int bit = 0; bit < (1 << N); ++bit) {
		string S = "";
		for (int i = 0; i < N; ++i) {
			S += '(';
		}
		for (int i = 0; i < N; ++i) {
			if (bit & (1 << i)) {
				S[N - i - 1] = ')';
			}
		}
		int p = 0;
		bool ok = true;
		for (int i = 0; i < N; ++i) {
			p += (S[i] == '(') ? +1 : -1;
			if (p < 0) {
				ok = false;
			}
		}
		if (p == 0 and ok) {
			cout << S << endl;
		}
	}
}