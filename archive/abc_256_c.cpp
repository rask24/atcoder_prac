#include <bits/stdc++.h>
using namespace std;

vector<int> h(3);
vector<int> w(3);
long long ans = 0;

int main()
{
	cin >> h[0] >> h[1] >> h[2] >> w[0] >> w[1] >> w[2];
	vector<vector<int>> m(3, vector<int> (3));
	for (int a = 1; a <= 30; ++a)
	{
		for (int b = 1; b <= 30; ++b)
		{
			for (int d = 1; d <= 30; ++d)
			{
				for (int e = 1; e <= 30; ++e)
				{
					int c = h[0] - a - b;
					int f = h[1] - d - e;
					int g = w[0] - a - d;
					int i = w[1] - b - e;
					int j = w[2] - c - f;
					if (min({c, f, g, i, j}) > 0 and g + i + j == h[2])
						++ans;
				}
			}
		}
	}
	cout << ans << endl;
}