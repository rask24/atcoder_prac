#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string N;
	cin >> N;
	for (int bit = 0; bit < (1 << 3); ++bit)
	{
		int res = N[0] - '0';
		for (int i = 0; i < 3; ++i)
			res += (N[i + 1] - '0') * ((bit & (1 << i)) ? 1 : -1);
		if (res == 7)
		{
			cout << N[0];
			for (int i = 0; i < 3; ++i)
				cout << ((bit & (1 << i)) ? "+" : "-") << N[i + 1];
			cout << "=7" << endl;
			return 0;
		}
	}
}