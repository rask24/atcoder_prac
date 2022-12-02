#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	long long ans = 0;
	for (int i = 0; i < N; ++i) {
		int A;
		cin >> A;
		ans += A;
	}
	cout << ans << endl;
}