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
#include <climits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int N, X;
	cin >> N >> X;
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	
	int sum = 0;
	for (int i = 0; i < N; ++i)
		sum += (i % 2 == 1) ? A[i] - 1 : A[i];
	cout << ((sum <= X) ? "Yes" : "No") << endl;
}