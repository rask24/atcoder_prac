#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<long long> L(N);
	for (int i = 0; i < N; ++i)
		cin >> L[i];
	long long ans = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			for (int k = j + 1; k < N; ++k) {
				if (L[i] == L[j] or L[j] == L[k] or L[k] == L[i])
					continue;
				if (abs(L[j] - L[k]) < L[i] and L[i] < L[j] + L[k]){
					++ans;
				}
			}
		}
	}
	cout << ans << endl;
}