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
	set<string> m;
	bool ac = true;
	string S, T;
	for (int i = 0; i < N; ++i)
	{
		cin >> S;
		if (m.find(S) != m.end() or (i and S.front() != T.back()))
			ac = false;
		else
			m.insert(S);
		T = S;
	}
	cout << (ac ? "Yes" : "No") << endl;
}