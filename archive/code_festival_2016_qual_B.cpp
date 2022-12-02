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
	int N, A, B;
	string S;
	cin >> N >> A >> B >> S;
	int nt, in;
	nt = in = 0;
	for (int i = 0; i < N; ++i)
	{
		if (S[i] == 'a')
		{
			if (nt + in < A + B)
			{
				++nt;
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
		else if (S[i] == 'b')
		{
			if (nt + in < A + B and in < B)
			{
				++in;
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
		else
			cout << "No" << endl;
	}
}