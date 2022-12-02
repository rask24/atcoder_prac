#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, P, Q, R;
	cin >> N >> P >> Q >> R;
	vector<long long> A(N), S(N + 1, 0);
	for (long long i = 0; i < N; ++i) {
		cin >> A[i];
		S[i + 1] = S[i] + A[i];
	}
	for (long long i = 0; i < N; ++i) {
		bool exist = true;
		exist &= binary_search(S.begin(), S.end(), S[i] + P);
		exist &= binary_search(S.begin(), S.end(), S[i] + P + Q);
		exist &= binary_search(S.begin(), S.end(), S[i] + P + Q + R);
		if (exist) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}