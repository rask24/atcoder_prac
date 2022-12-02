#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <climits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int A, B, C;
	cin >> A >> B >> C;
	if (A == B and B != C)
		cout << "Yes" << endl;
	else if (B == C and C != A)
		cout << "Yes" << endl;
	else if (C == A and A != B)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}