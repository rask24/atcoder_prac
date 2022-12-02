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
#include <sstream>
using namespace std;
using namespace std::literals;

int main(void)
{
	string S;
	cin >> S;
	vector<char> alphabet('z' + 1, 0);
	for (int i = 0; i < S.size(); ++i)
		++alphabet[S[i]];
	for (char i = 'a'; i <= 'z'; ++i)
	{
		if (alphabet[i] == 0)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "None" << endl;
}