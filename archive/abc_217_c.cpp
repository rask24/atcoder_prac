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
	cin >> N;
	vector<int> p(N), q(N);
	for (int i = 0; i < N; ++i)
		cin >> p[i];
	for (int i = 0; i < N; ++i)
		q[p[i] - 1] = i + 1;
	for (int i = 0; i < N; ++i)
		cout << q[i] << " ";
	cout << endl;
}