#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, K, X;
	cin >> N >> K >> X;
	vector<pair<int, int>> A(N);
	long long sum = 0;
	for (int i = 0; i < N; ++i)
	{
		int tmp;
		cin >> tmp;
		sum += tmp;
		A[i].first = tmp % X;
		A[i].second = tmp / X;
	}
	sort(A.begin(), A.end());
	reverse(A.begin(), A.end());

	int counter = 0;
	for (int i = 0; i < N; ++i)
	{
		if (counter + A[i].second < K)
		{
			counter += A[i].second;
			sum -= A[i].second * X;
		}
		else
		{
			sum -= (K - counter) * X;
			counter = K;
		}
	}
	for (int i = 0; i < N and counter < K; ++i, ++counter)
		sum -= A[i].first;
	cout << sum << endl;
}