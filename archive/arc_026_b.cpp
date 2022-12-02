#include <bits/stdc++.h>
using namespace std;

vector<long long> enum_divisors(long long N)
{
	vector<long long> res;
	for (long long i = 1; i * i <= N; ++i) {
		if (N % i == 0) {
			res.push_back(i);
			if (i * i != N) {
				res.push_back(N / i);
			}
		}
	}
	sort(res.begin(), res.end());
	return res;
}

int main()
{
	long long N;
	cin >> N;
	vector<long long> ed = enum_divisors(N);
	long long sum = 0;
	for (int i = 0; i < ed.size() - 1; ++i){
		sum += ed[i];
	}
	cout << ((sum == N) ? "Perfect" : ((sum < N) ? "Deficient" : "Abundant")) << endl;
}