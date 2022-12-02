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
	int N, X;
	cin >> N >> X;
	string S = "";
	for (char c = 'A'; c <= 'Z'; ++c)
	{
		for (int i = 0; i < N; ++i)
			S += c;
	}
	cout << S[X - 1] << endl;
}