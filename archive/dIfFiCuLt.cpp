#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	bool is_diff = true;
	for (int i = 0; i < S; ++i) {
		int bit = 0b00;
		bit |= (i % 2 == 0);
		bit |= (islower(S[i]) << 1);
		is_diff = (bit == 0b11);
	}
	cout << ((is_diff) ? "Yes" : "No") << endl;
}