#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string S(3, 0), T(3, 0);
	cin >> S[0] >> S[1] >> S[2] >> T[0] >> T[1] >> T[2];
	
	int counter = 0;
	if (S[0] != T[0])
	{
		if (S[0] == T[1])
			swap(T[0], T[1]);
		else if (S[0] == T[2])
			swap(T[0], T[2]);
		++counter;
	}
	if (S[1] != T[1])
		++counter;

	if (counter % 2 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}