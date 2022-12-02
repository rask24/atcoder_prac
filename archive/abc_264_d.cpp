#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S, T = "atcoder";
	cin >> S;
	vector<int> a(S.size());
	for (int i = 0; i < S.size(); ++i)
		a[i] = T.find(S[i]);
	
	int ans = 0;
	for (int i = 0; i < S.size(); ++i) {
		for (int j = i + 1; j < S.size(); ++j) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
				++ans;
			}
		}
	}
	cout << ans << endl;
}	