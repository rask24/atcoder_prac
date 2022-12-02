#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> P(N);
	for (int i = 0; i < N; ++i)
		cin >> P[i].first >> P[i].second;
	sort(P.begin(), P.end());
	int head = P.front().first, tail = P.front().second;
	for (int i = 0; i < N; ++i) {
		int l = P[i].first, r = P[i].second;
		if (tail < l) {
			cout << head << " " << tail << endl;
			head = l;
			tail = r;
		} else if (tail < r) {
			tail = r;
		}
	}
	cout << head << " " << tail << endl;
}