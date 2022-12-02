#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;
	vector<vector<int>> A(H, vector<int> (W));
	long long m = 1000, s = 0;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			long long a;
			cin >> a;
			s += a;
			m = min(a, m);
		}
	}
	cout << s - (m * H * W) << endl;
}