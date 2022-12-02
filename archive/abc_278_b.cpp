#include <bits/stdc++.h>
using namespace std;

bool miss(int t)
{
	int h = t / 60 % 24;
	int m = t % 60;
	int nh = (h / 10 * 10) + (m / 10);
	int nm = (h % 10 * 10) + (m % 10);
	return nh < 24 && nm < 60;
}

int main()
{
	int H, M;
	cin >> H >> M;
	int t = H * 60 + M;
	while (!miss(t))
		++t;
	cout << t / 60 % 24 << " " << t % 60 << endl;
}