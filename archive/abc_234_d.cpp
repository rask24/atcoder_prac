#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	set<int> s;
	int p;
	for (int i = 0; i < K; ++i) {
		cin >> p;
		s.insert(p);
	}

	auto iter = s.begin();
	cout << *iter << endl;
	for (int i = K; i < N; ++i) {
		cin >> p;
		s.insert(p);
		if (*iter < p) {
			++iter;
		}
		cout << *iter << endl;
	}
}
