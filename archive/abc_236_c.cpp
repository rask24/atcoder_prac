#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<string> S(N), T(M);
	for (int i = 0; i < N; ++i)
		cin >> S[i];
	for (int i = 0; i < M; ++i)
		cin >> T[i];
	
	int j = 0;
	for (int i = 0; i < N; ++i)
	{
		if (S[i] == T[j])
		{
			cout << "Yes" << endl;
			++j;
		}
		else
			cout << "No" << endl;
	}
}