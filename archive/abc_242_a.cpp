#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
using namespace std;

int main()
{
	int A, B, C, X;
	cin >> A >> B >> C >> X;
	double p;

	if (X <= A)
		p = 1.0;
	else if (X <= B)
	{
		p = (double)C / (B - A);
	}
	else
		p = 0.0;
	cout << setprecision(12) << p << endl;
}