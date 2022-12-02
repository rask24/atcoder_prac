#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> T(14, 0);
	for (int i = 0; i < 5; ++i) {
		int c;
		cin >> c;
		++T[c];
	}
	bool a = false, b = false;
	for (int i = 1; i <= 13; ++i) {
		if (T[i] == 3)
			a = true;
		else if (T[i] == 2)
			b = true;
	}
	cout << ((a and b) ? "Yes" : "No") << endl;
}