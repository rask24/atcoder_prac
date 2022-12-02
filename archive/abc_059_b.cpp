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
using namespace std::string_literals;

int main(void)
{
	string A, B;
	cin >> A >> B;
	if (A.size() > B.size())
		cout << "GREATER" << endl;
	else if (A.size() < B.size())
		cout << "LESS" << endl;
	else
	{
		for (int i = 0; i < A.size(); ++i)
		{
			if (A[i] > B[i])
			{
				cout << "GREATER" << endl;
				return 0;
			}
			else if (A[i] < B[i])
			{
				cout << "LESS" << endl;
				return 0;
			}
		}
		cout << "EQUAL" << endl;
	}
}