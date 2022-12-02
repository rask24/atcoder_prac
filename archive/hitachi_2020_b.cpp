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
using namespace std::literals;

int main(void)
{
	int A, B, M;
	cin >> A >> B >> M;
	vector<int> a(A), b(B);
	for (int i = 0; i < A; ++i)
		cin >> a[i];
	for (int i = 0; i < B; ++i)
		cin >> b[i];
	vector<tuple<int, int, int>> T(M);
	for (int i = 0; i < M; ++i)
	{
		cin >> get<0>(T[i]) >> get<1>(T[i]) >> get<2>(T[i]);
		--get<0>(T[i]);
		--get<1>(T[i]);
	}
	int res = 1e8;
	for (int i = 0; i < M; ++i)
		res = min(res, a[get<0>(T[i])] + b[get<1>(T[i])] - get<2>(T[i]));
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	res = min(res, a.front() + b.front());
	cout << res << endl;
}