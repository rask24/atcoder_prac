#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	bool is_diff = true;
	for (int i = 0; i < S.size(); ++i) {
		int bit = 0b00;
		bit |= ((i % 2 == 0) ? 0b01 : 0b10);
		bit |= ((islower(S[i])) ? 0b10 : 0b01);
		if (bit != 0b11) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;	
}