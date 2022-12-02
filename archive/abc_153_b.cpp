#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, N;
	cin >> H >> N;
	long long sum = 0;
	for (int i = 0; i < N; ++i) {
		long long a;
		cin >> a;
		sum += a;
	}
	cout << ((H <= sum) ? "Yes" : "No") << endl;
}