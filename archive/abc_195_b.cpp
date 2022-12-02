#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B, W;
	cin >> A >> B >> W;
	W *= 1000;
	int f = 0, l = 0;
	bool flag = false;
	for (int i = 0; i * A <= W; ++i) {
		if (W <= i * B) {
			if (!flag) {
				f = i;
				flag = true;
			}
			l = i;
		}
	}
	if (flag)
		cout << f << " " << l << endl;
	else
		cout << "UNSATISFIABLE" << endl;
}	