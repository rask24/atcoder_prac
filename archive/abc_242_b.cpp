#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
using namespace std;

int main()
{
	string S;
	cin >> S;
	sort(S.begin(), S.end());
	cout << S << endl;
}