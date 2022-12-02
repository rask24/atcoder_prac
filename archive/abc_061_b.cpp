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
#include <sstream>
using namespace std;
using namespace std::string_literals;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int>> G(N + 1);
	for (int i = 0; i < M; ++i)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for (int i = 1; i <= N; ++i)
		cout << G[i].size() << endl;
}