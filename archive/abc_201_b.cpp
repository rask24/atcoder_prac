#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<int, string>> M(N);
	for (int i = 0; i < N; ++i)
		cin >> M[i].second >> M[i].first;
	sort(M.begin(), M.end());
	cout << M[M.size() - 2].second << endl;
}