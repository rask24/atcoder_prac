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

void print_exit(int i)
{
	cout << i << endl;
	exit(0);
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> d(N, -1);
	for (int i = 0; i < M; ++i)
	{
		int s, c;
		cin >> s >> c;
		--s;
		if (d[s] == -1)
		{
			if (N > 1 and s == 0 and c == 0)
				print_exit(-1);
			else
				d[s] = c;
		}
		else if (d[s] != c)
			print_exit(-1);
	}
	if (N == 1 and d[0] == -1)
		print_exit(0);
	if (d[0] == -1)
		d[0] = 1;
	for (int i = 0; i < N; ++i)
		cout << ((d[i] == -1) ? 0 : d[i]);
	cout << endl;
}