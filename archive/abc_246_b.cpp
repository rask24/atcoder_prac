#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	cout << fixed << setprecision(12) << cos(atan2(B, A)) << " " << sin(atan2(B, A)) << endl;
}