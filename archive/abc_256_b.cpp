#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, P;
	cin >> N;
	vector<int> B(4, 0);
	P = 0;
	for (int i = 0; i < N; ++i)
	{
		int A;
		cin >> A;
		B[0] = 1;
		for (int j = 4; j >= 0; --j)
		{
			if (B[j])
			{
				if (j + A < 4)
					B[j + A] = 1;
				else
					++P;
				B[j] = 0;
			}
		}
	}
	cout << P << endl;
}