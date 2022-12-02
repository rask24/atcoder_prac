#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int N, X;
	cin >> N >> X;
	vector<int> A(N + 1);
	for (int i = 1; i <= N; ++i)
		cin >> A[i];
	vector<bool> B(N + 1);
	int key = X;
	while (true)
	{
		if (B[X])
			break;
		B[X] = true;
		X = A[X];
	}
	int ans = 0;
	for (int i = 1; i <= N; ++i)
	{
		if (B[i])
			++ans;
	}
	cout << ans << endl;
}