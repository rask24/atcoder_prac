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
	int N, M, sum, P, X;
	cin >> N;
	vector<int> T(N + 1);
	sum = 0;
	for (int i = 1; i <= N; ++i)
	{
		cin >> T[i];
		sum += T[i];
	}
	cin >> M;
	for (int i = 0; i < M; ++i)
	{
		cin >> P >> X;
		cout << sum - T[P] + X << endl;
	}
}