#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, K;
	cin >> N >> K;
	double p = 0;
	for (int i = 1; i <= N; ++i) {
		int j = i, cnt = 0;
		while (j < K) {
			j *= 2;
			++cnt;
		}
		p += pow(N, -1) * pow(2, -cnt);
	}
	cout << fixed << setprecision(15) << p << endl;
}