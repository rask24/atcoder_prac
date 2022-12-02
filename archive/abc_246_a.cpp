#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x1, x2, x3;
	int y1, y2, y3;

	cin >> x1 >> y1
		>> x2 >> y2
		>> x3 >> y3;

	if (x1 == x2)
		cout << x3 << " ";
	else if (x2 == x3)
		cout << x1 << " ";
	else
		cout << x2 << " ";
	
	if (y1 == y2)
		cout << y3 << endl;
	else if (y2 == y3)
		cout << y1 << endl;
	else
		cout << y2 << endl;
}