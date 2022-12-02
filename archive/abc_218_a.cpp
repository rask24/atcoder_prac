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
	int N;
	string S;
	cin >> N >> S;

	if (S[N - 1] == 'o')
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}