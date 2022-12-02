#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b) { if (b < a) { a = b; return true; } else return false; }
template<class T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return true; } else return false; }

long long sq_dist(long long a, long long b, long long c, long long d)
{
	return (a - c) * (a - c) + (b - d) * (b - d);
}

int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> A(K), X(N), Y(N);
	for (int i = 0; i < K; ++i) {
		cin >> A[i];
		--A[i];
	}
	for (int i = 0; i < N; ++i)
		cin >> X[i] >> Y[i];
	long long sq_ans = 0;
	for (int i = 0; i < N; ++i) {
		long long min_dist = 1LL << 60;
		long long dist;
		int key = -1;
		for (int j = 0; j < K; ++j) {
			dist = sq_dist(X[i], Y[i], X[A[j]], Y[A[j]]);
			if (chmin(min_dist, dist))
				key = A[j];
		}
		dist = sq_dist(X[i], Y[i], X[key], Y[key]);
		chmax(sq_ans, dist);
	}
	cout << setprecision(20) << sqrt(sq_ans) << endl;
}