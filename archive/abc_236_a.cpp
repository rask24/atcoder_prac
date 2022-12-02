#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	string S;
	int a, b;
	cin >> S >> a >> b;
	swap(S[a - 1], S[b - 1]);
	cout << S << endl;
}