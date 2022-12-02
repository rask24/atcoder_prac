#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, Q;
	string S;
	cin >> N >> S >> Q;
	bool flip = false;
	while (Q--) {
		int t, a, b;
		cin >> t >> a >> b;
		if (t == 1) {
			--a;
			--b;
			if (flip) {
				if (a < N)
					a += N;
				else
					a -= N;
				if (b < N)
					b += N;
				else
					b -=N;
			}
			swap(S[a], S[b]);
		} else {
			flip = !flip;
		}
	}
	cout << ((flip) ? S.substr(N, N) + S.substr(0, N) : S) << endl;
}