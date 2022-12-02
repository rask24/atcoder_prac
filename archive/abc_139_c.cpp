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
	int N;
	cin >> N;
	vector<int> H(N);
	for (int i = 0; i < N; ++i)
		cin >> H[i];
	int ans = 0;
	int cont = 0;
	for (int i = 0; i < N; ++i)
	{
		if (H[i] < H[i + 1] or i == N - 1)
		{
			ans = max(ans, cont);
			cont = 0;
		}
		else
			++cont;
	}
	cout << ans << endl;
}