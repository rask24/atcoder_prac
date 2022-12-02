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
#include <cctype>
#include <sstream>
using namespace std;
using namespace std::string_literals;

int main(void)
{
	string S;
	long long K;
	long long head = 0;
	cin >> S >> K;
	for (int i = 0; i < S.size(); ++i)
	{
		if (S[i] == '1')
			++head;
		else
			break;
	}
	if (S[0] == '1' and K > head)
		cout << S[head] << endl;
	else
		cout << S[0] << endl;
}