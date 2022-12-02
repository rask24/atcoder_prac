#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	int ans = INT_MAX / 2;
	for (int bit = 0; bit < (1 << (N - 1)); ++bit) {
		vector<int> ps;
		for (int i = 0; i < N - 1; ++i) {
			if (bit & (1 << i)) {
				ps.push_back(i);
			}
		}
		ps.push_back(N - 1);
		int k = 0;
		vector<int> px;
		for (int i = 0; i < N; ++i) {
			int tmp = 0;
			while (k < ps.size() && i < ps[k]) {
				tmp |= A[i];
				++i;
			}
			tmp |= A[i];
			px.push_back(tmp);
			++k;
		}
		int sum = px[0];
		for (int i = 1; i < px.size(); ++i) {
			sum ^= px[i];
		}
		ans = min(ans, sum);
	}
	cout << ans << endl;
}