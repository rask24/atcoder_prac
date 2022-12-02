#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	string S;
	cin >> S;
	if (S[S.length() - 1] == 'r' and S[S.length() - 2] == 'e')
		cout << "er" << endl;
	else if (S.length() > 2 and S[S.length() - 3] == 'i' and S[S.length() - 2] == 's' and S[S.length() - 1] == 't')
		cout << "ist" << endl;
}