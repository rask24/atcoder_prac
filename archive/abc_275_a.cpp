#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> H(N);
	for (int i = 0; i < N; ++i) {
		cin >> H[i].first;
		H[i].second = i + 1;
	}
	sort(H.begin(), H.end());
	cout << H.back().second  << endl;
}