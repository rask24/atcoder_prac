#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int V;
	vector<int> T(3);
	cin >> V >> T[0] >> T[1] >> T[2];
	int count = 0;
	while (true)
	{
		V -= T[count % 3];
		if (V < 0)
			break;
		++count;
	}
	if (count % 3 == 0)
		cout << "F" << endl;
	else if (count % 3 == 1)
		cout << "M" << endl;
	else
		cout << "T" << endl;
}