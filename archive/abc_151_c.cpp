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
	int N, M;
	cin >> N >> M;
	vector<bool> a(N);
	vector<int> w(N, 0);
	for (int i = 0; i < M; ++i)
	{
		int p;
		string S;
		cin >> p >> S;
		if (!a[p - 1] and S == "WA")
			++w[p - 1];
		a[p - 1] = a[p - 1] or (S == "AC"); 
	}
	int ac = 0;
	int pe = 0;
	for (int i = 0; i < N; ++i)
	{
		pe += a[i] ? w[i] : 0;
		ac += a[i];
	}
	cout << ac << " " << pe << endl;
}