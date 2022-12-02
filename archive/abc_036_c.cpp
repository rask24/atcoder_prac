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
	vector<int> a(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	vector<int> b = a;
	sort(b.begin(), b.end());
	b.erase(unique(b.begin(), b.end()), b.end());

	vector<int> res(N);
	for (int i = 0; i < N; ++i)
		res[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
	
	for (auto i : res)
		cout << i << " ";
	cout << endl;
}