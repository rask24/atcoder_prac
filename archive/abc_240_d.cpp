#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> S;
	long long cnt = 0;
	for (int i = 0; i < N; ++i) {
		int a;
		cin >> a;
		if (S.size() && S.back().first == a) {
			++S.back().second;
			++cnt;
		} else {
			S.push_back(make_pair(a, 1));
			++cnt;
		}
		if (S.back().first == S.back().second) {
			cnt -= S.back().second;
			S.pop_back();
		}
		cout << cnt << endl;
	}
}