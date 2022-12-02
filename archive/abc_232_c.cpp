#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	string S = "";
	vector<pair<int, int>> G(M);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		--a, --b;
		if (a > b)
			swap(a, b);
		G[i] = make_pair(a, b);
	}
	sort(G.begin(), G.end());
	vector<pair<int, int>> H(M);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		--a, --b;
		if (a > b)
			swap(a, b);
		H[i] = make_pair(a, b);
	}
	sort(H.begin(), H.end());

	for (int i = 0; i < N; ++i) {
		S += '0' + i;
	}

	do {
		vector<pair<int, int>> T(M);
		for (int i = 0; i < M; ++i) {
			T[i].first = S[G[i].first] - '0';
			T[i].second = S[G[i].second] - '0';
			if (T[i].first > T[i].second)
				swap(T[i].first, T[i].second);
		}
		sort(T.begin(), T.end());
		bool eq = true;
		for (int i = 0; i < M; ++i) {
			if (T[i] != H[i])
				eq = false;
		}
		if (eq) {
			cout << "Yes" << endl;
			return 0;
		}
	} while (next_permutation(S.begin(), S.end()));
	cout << "No" << endl;
}