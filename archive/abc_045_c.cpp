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

int main()
{
	string S;
	cin >> S;
	long long ans = 0;

	for (int bit = 0; bit < (1 << (S.size() - 1)); ++bit)
	{
		int j = 0;
		for (int i = 0; i < (S.size() - 1); ++i)
		{
			if (bit & (1 << i))
			{
				ans += stoll(S.substr(j, i - j + 1));
				cerr << S.substr(j, i - j + 1) << " + ";
				j = i + 1;
			}
		}
		ans += stoll(S.substr(j, S.size() - j));
		cerr << S.substr(j, S.size() - j) << endl;
	}
	cout << ans << endl;
}