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
	int N, M, C;
	cin >> N >> M >> C;
	vector<int> A(M), B(M);
	for (int i = 0; i < M; ++i)
		cin >> B[i];
	int res = 0;
	for (int i = 0; i < N; ++i)
	{
		int ip = 0;
		int tmp = 0;
		for (int j = 0; j < M; ++j)
		{
			cin >> tmp;
			ip += tmp * B[j];
		}
		if (ip + C > 0)
			++res;
	}
	cout << res << endl;
}