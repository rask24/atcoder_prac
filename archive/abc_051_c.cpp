#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sx, sy, tx, ty;
	cin >> sx >> sy >> tx >> ty;
	int x = tx - sx, y = ty - sy;
	string right(x, 'R');
	string left(x, 'L');
	string up(y, 'U');
	string down(y, 'D');
	cout << right << up;
	cout << left << down;
	cout << "DR" << right << up << "UL";
	cout << "UL" << left << down << "DR" << endl;
}