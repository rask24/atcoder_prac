#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> P(M), Y(M);
	for (int i = 0; i < M; ++i)
		cin >> P[i] >> Y[i];
	
	vector<vector<int>> T(N + 1);
	for (int i = 0; i < M; ++i)
		T[P[i]].push_back(Y[i]);
	for (int i = 0; i <= N; ++i)
		sort(T[i].begin(), T[i].end());

	for (int i = 0; i < M; ++i)
	{
		int pos = lower_bound(T[P[i]].begin(), T[P[i]].end(), Y[i]) - T[P[i]].begin() + 1;
		cout << setw(6) << setfill('0') << P[i];
		cout << setw(6) << setfill('0') << pos << endl;
	}
}