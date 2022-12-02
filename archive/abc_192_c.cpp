#include <bits/stdc++.h>
using namespace std;

int main()
{
	string N;
	long long K;
	cin >> N >> K;
	for (int i = 0; i < K; ++i) {
		long long a, b;
		sort(N.begin(), N.end(), greater<int>());
		a = stoi(N);
		reverse(N.begin(), N.end());
		b = stoi(N);
		N = to_string(a - b);
	}
	cout << N << endl;
}