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
	string O, E;
	cin >> O >> E;

	for (int i = 0; i < E.size(); ++i)
	{
		cout << O[i] << E[i];
	}
	if (O.size() > E.size())
		cout << O.back();
	cout << endl;
}