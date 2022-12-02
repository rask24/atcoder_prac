#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W, X, Y;
	cin >> H >> W >> X >> Y;
	--X, --Y;
	vector<string> S(H);
	for (int i = 0; i < H; ++i)
		cin >> S[i];
	int ans = 1;
	for (int i = Y + 1; i < W; ++i) {
		if (S[X][i] == '.')
			++ans;
		else
			break;
	}
	for (int i = Y - 1; i >= 0; --i) {
		if (S[X][i] == '.')
			++ans;
		else
			break;
	}
	for (int i = X + 1; i < H; ++i) {
		if (S[i][Y] == '.')
			++ans;
		else
			break;
	}
	for (int i = X - 1; i >= 0; --i) {
		if (S[i][Y] == '.')
			++ans;
		else
			break;
	}
	cout << ans << endl;
}