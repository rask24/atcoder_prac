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
#include <cctype>
#include <sstream>
using namespace std;
using namespace std::string_literals;

int main(void)
{
	int N, K, Q;
	cin >> N >> K >> Q;
	vector<int> P(N, 0);
	for (int i = 0; i < Q; ++i)
	{
		int k;
		cin >> k;
		++P[k - 1];
	}
	for (int i = 0; i < N; ++i)
		cout << ((P[i] > Q - K) ? "Yes" : "No") << endl;
}