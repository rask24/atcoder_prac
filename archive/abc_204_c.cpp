#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <climits>
using namespace std;
using namespace std::literals;

vector<vector<int>> G;
vector<int> R;

void dfs(int i)
{
	if (R[i])
		return;
	++R[i];
	for (int j = 0; j < G[i].size(); ++j)
		dfs(G[i][j]);
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	G.resize(N + 1);
	R.resize(N + 1);
	for (int i = 1; i <= M; ++i)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
	}

	int res = 0;
	for (int i = 1; i <= N; ++i)
	{
		R.assign(N + 1, 0);
		dfs(i);
		for (int j = 1; j <= N; ++j)
		{
			if (R[j])
				++res;
		}
	}
	cout << res << endl;
}