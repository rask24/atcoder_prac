#include <bits/stdc++.h>
using namespace std;

int main()
{
	int R, C;
	cin >> R >> C;
	--R, --C;
	if (R > 7)
		R = 14 - R;	
	if (C > 7)
		C = 14 - C;
	if (R < C)
		cout << ((R % 2 == 0) ? "black" : "white") << endl;
	else
		cout << ((C % 2 == 0) ? "black" : "white") << endl;
}