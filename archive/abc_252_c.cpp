#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a <= b) { a = b; return true; } else { return false; } }

int main()
{
	int N;
	cin >> N;
	vector<string> S(N);
	for (int i = 0; i < N; ++i)
		cin >> S[i];
	vector<pair<int, int>> v(10);
	for (int i = 0; i < 10; ++i) {
		vector<int> h(10, 0);
		for (int j = 0; j < 10; ++j) {
			for (int k = 0; k < N; ++k) {
				if (S[k][j] == '0' + i)
					++h[j];
			}
		}

		int val = 0, key = -1;
		for (int j = 0; j < 10; ++j) {
			if (chmax(val, h[j]))
				key = j;
		}
		v[i] = {val, key};
	}
	sort(v.begin(), v.end());
	cout << (v[0].first - 1) * 10 + v[0].second << endl;
}