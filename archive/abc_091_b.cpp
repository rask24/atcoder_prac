#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N, M;
	cin >> N;
	unordered_map<string, int> m;
	string S;
	for (int i = 0; i < N; ++i)
	{
		cin >> S;
		++m[S];
	}
	cin >> M;
	for (int i = 0; i < M; ++i)
	{
		cin >> S;
		--m[S];
	}
	int ans = 0;
	for (auto i : m)
		ans = max(ans, i.second);
	cout << ans << endl;
}