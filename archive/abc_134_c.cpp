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
	int N;
	cin >> N;
	vector<int> A(N);
	int mf, ms, mc;
	mf = ms = 0;
	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
		if (mf < A[i])
		{
			ms = mf;
			mf = A[i];
		} else if (ms < A[i])
			ms = A[i];
	}
	for (int i = 0; i < N; ++i)
	{
		if ((A[i] != mf) or (A[i] == mf and mf == ms))
			cout << mf << endl;
		else
			cout << ms << endl;
	}
}