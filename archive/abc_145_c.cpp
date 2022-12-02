#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<pair<int, int>> p(N);
	for (int i = 0; i < N; ++i)
		cin >> p[i].first >> p[i].second;
	string S;
	for (int i = 0; i < N; ++i)
		S.push_back('0' + i);
	int cnt = 0;
	double dist = 0.0;
	do
	{
		cerr << S << endl;
		++cnt;
		for (int i = 0; i < N - 1; ++i)
		{
			int a, b;
			a = S[i] - '0';
			b = S[i + 1] - '0';
			dist += sqrt((p[b].first - p[a].first) * (p[b].first - p[a].first) + (p[b].second - p[a].second) * (p[b].second - p[a].second));
		}
	} while (next_permutation(S.begin(), S.end()));
	cout << setprecision(15) << dist / cnt << endl;
}