#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	cin >> S;
	cout << "0" + S.substr(0, 3) << endl;
}