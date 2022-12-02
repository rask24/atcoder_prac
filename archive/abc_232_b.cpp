#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;
using namespace std::literals;

void ch_diff(string &S, vector<int> &v)
{
	for (int i = 0; i < S.size() - 1; ++i)
		v[i] = (S[i + 1] - S[i] + 26) % 26;
}

int main()
{
	string S, T;
	cin >> S >> T;

	vector<int> a(S.size() - 1), b(S.size() - 1);
	ch_diff(S, a);
	ch_diff(T, b);
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] != b[i])
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}