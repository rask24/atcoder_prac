#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<tuple<int, int, char>> p(N);
	for (int i = 0; i < N; ++i)
		cin >> get<1>(p[i]) >> get<0>(p[i]);
	string S;
	cin >> S;
	for (int i = 0; i < N; ++i)
		get<2>(p[i]) = S[i];
	sort(p.begin(), p.end());
	for (int i = 0; i < N; ++i) {
		while (i < N and get<0>(p[i]) == get<0>(p[i + 1])) {
			if (get<2>(p[i]) == 'R' and get<2>(p[i + 1]) == 'L') {
				cout << "Yes" << endl;
				return 0;
			}
			++i;
		}
	}
	cout << "No" << endl;
}