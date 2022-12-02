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
	string res = "";
	
	if (min(A, B) >= 0)
	{
		if (A > B)
			res = ">";
		else if (A < B)
			res = "<";
		else
			res = "=";
	}
	else if (max(A, B) < 0)
	{
		if ((C % 2 == 1 and A < B) or (C % 2 == 0 and A > B))
			res = "<";
		else if ((C % 2 == 1 and A > B) or (C % 2 == 0 and A < B))
			res = ">";
		else
			res = "=";
	}
	else
	{
		if ((C % 2 == 1 and A < B) or (C % 2 == 0 and abs(A) < abs(B)))
			res = "<";
		else if ((C % 2 == 1 and A > B) or (C % 2 == 0 and abs(A) > abs(B)))
			res = ">";
		else
			res= "=";
	}
	cout << res << endl;
}