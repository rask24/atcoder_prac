#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;
using namespace std::literals;

int main()
{
	int L, R;
	string S;
	cin >> L >> R >> S;
	for (int i = 0; i <= (R - L) / 2; ++i)
		swap(S[L + i - 1], S[R - i - 1]);
	cout << S << endl;
}