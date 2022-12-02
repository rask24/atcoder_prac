#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, Q;
	cin >> N;
	vector<long long> A(N);
	set<int> s;
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	long long offset = -1;
	cin >> Q;
	while (Q--) {
		int T;
		cin >> T;

		if (T == 1) {
			int x;
			cin >> x;
			offset = x;
			s.clear();
		} else if (T == 2) {
			int i, x;
			cin >> i >> x;
			--i;
			if (offset == -1 || find(s.begin(), s.end(), i) != s.end()) {
				A[i] += x;
			} else {
				A[i] = offset + x;
				s.insert(i);
			}
		} else if (T == 3) {
			int i;
			cin >> i;
			--i;
			if (offset == -1 || find(s.begin(), s.end(), i) != s.end()) {
				cout << A[i] << endl;
			} else {
				cout << offset << endl;
			}
		}
	}
}