#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];
	int ans = 0;
	while (!(v[0] == v[1] and v[1] == v[2]))
	{
		sort(v.begin(), v.end());
		if (v[0] == v[1])
			++v[0], ++v[1];
		else
			v[0] += 2;
		++ans;
	}
	cout << ans << endl;
}