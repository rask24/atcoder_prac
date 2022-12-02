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
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	vector<int> pizza(360, 0);
	pizza[0] = 1;

	int angle = 0;
	for (int i = 0; i < N; ++i)
	{
		angle = (angle + A[i]) % 360;
		++pizza[angle];
	}

	int diff = 0;
	int i, j;
	i = 0;
	while (i < pizza.size())
	{
		j = i + 1;
		while (pizza[j] == 0 and j < pizza.size())
			++j;
		diff = max(diff, j - i);
		i = j;
	}
	cout << diff << endl;
}