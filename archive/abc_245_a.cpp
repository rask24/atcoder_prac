#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	if (A < C or (A == C and B <= D))
		cout << "Takahashi" << endl;
	else
		cout << "Aoki" << endl;
}