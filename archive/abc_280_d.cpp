#include <bits/stdc++.h>
using namespace std;

template <typename T> vector<pair<T, T>> prime_factorization(T N) {
	vector<pair<T, T>> ret;
	for (T i = 2; i * i <= N; ++i) {
		if (N % i != 0) continue;
		T tmp = 0;
		while (N % i == 0) {
			tmp++;
			N /= i;
		}
		ret.push_back(make_pair(i, tmp));
	}
	if (N != 1) ret.push_back(make_pair(N, 1));
	return ret;
}

int main() {
	long long K;
	cin >> K;
	vector<pair<long long, long long>> pf = prime_factorization(K);
	long long left = 1, right = K;
	while (right - left > 1) {
		long long mid = left + (right - left) / 2;
		bool ok = true;
		for (auto [p, ex] : pf) {
			long long cnt = 0;
			long long b = p;
			while (mid / b) {
				cnt += mid / b;
				b *= p;
			}
			if (cnt < ex)
				ok = false;
		}
		if (ok)
			right = mid;
		else
			left = mid;
	}
	cout << right << endl;
}