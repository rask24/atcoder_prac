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
	map<string, int> m;
	m["ABC"] = m["ARC"] = m["AGC"] = m["AHC"] = 0;
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	++m[s1]; 
	++m[s2]; 
	++m[s3]; 

	for (auto i : m)
	{
		if (i.second == 0)
			cout << i.first << endl;
	}
}