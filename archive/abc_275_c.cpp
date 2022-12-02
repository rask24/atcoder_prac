#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> S(9);
	for (int i = 0; i < 9; ++i)
		cin >> S[i];
	int ans = 0;
	for (int i = 0; i < 9 * 9; ++i) {
		for (int j = i + 1; j < 9 * 9; ++j) {
			for (int k = j + 1; k < 9 * 9; ++k) {
				if (S[i / 9][i % 9] == '.' || S[j / 9][j % 9] == '.' || S[k / 9][k % 9] == '.')
					continue;
				int x, y, a, b, c, d;
				a = j / 9 - i / 9;
				b = j % 9 - i % 9;
				c = k / 9 - i / 9;
				d = k % 9 - i % 9;
				x = i / 9 + a + c;
				y = i % 9 + b + d;
				if (x < 0 || 9 <= x || y < 0 || 9 <= y)
					continue;
				if (!((a == -d && b == c) || (a == d && b == -c)))
					continue;
				if (S[x][y] == '#') {
					++ans;
				}
			}
		}
	}
	cout << ans << endl;
}