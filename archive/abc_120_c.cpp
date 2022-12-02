#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string S;
	cin >> S;
	int red, blue;
	red = blue = 0;
	for (int i = 0; i < S.size(); ++i)
	{
		if (S[i] == '0')
			++red;
		else
			++blue;
	}
	cout << 2 * min(red, blue) << endl;
}