#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;
using namespace std::literals;

int main()
{
	int N, W;
	cin >> N >> W;
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	vector<char> B(W + 1);
	
	for (int i = 0; i < N; ++i)
	{
		if (A[i] <= W)
			++B[A[i]];
		for (int j = i + 1; j < N; ++j)
		{
			if (A[i] + A[j] <= W)
				++B[A[i] + A[j]];
			for (int k = j + 1; k < N; ++k)
			{
				if (A[i] + A[j] + A[k] <= W)
					++B[A[i] + A[j] + A[k]];
			}
		}
	}
	int ans = 0;
	for (int i = 0; i <= W; ++i)
	{
		if (B[i])
			++ans;
	}
	cout << ans << endl;
}