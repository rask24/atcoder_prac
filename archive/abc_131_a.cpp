#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	bool d = true;
	for (int i = 0; i < 3; ++i) {
		if (S[i] == S[i + 1])
			d = false;
	}
	cout << ((d) ? "Good" : "Bad") << endl;
}