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
	vector<int> H(N);
	for (int i = 0; i < N; ++i)
		cin >> H[i];
	
	int i = 0;
	while (i < N and H[i] < H[i + 1])
		++i;
	cout << H[i] << endl;
}