#include <bits/stdc++.h>
using namespace std;

long long count_devisor(long long N) {
	long long ret = 0;
	for (long long i = 1; i * i <= N; ++i) {
		if (N % i == 0) {
			ret += 1 + (i != N / i);
		}
	}
	return ret;
}

int main() {
	long long N;
	cin >> N;
	long long ans = 0;
	for (long long i = 1; i <= N / 2; ++i) {
		ans += count_devisor(i) * count_devisor(N - i) * ((i == N - i) ? 1 : 2);
	}
	cout << ans << endl;
}