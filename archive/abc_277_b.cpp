#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> S(N);
	for (int i = 0; i < N; ++i)
		cin >> S[i];
	string T1 = "HDCS", T2 = "A23456789TJQK";
	set<string> ss;
	for (int i = 0; i < N; ++i) {
		if (find(T1.begin(), T1.end(), S[i][0]) == T1.end() || find(T2.begin(), T2.end(), S[i][1]) == T2.end()) {
			cout << "No" << endl;
			return 0;
		}
		ss.insert(S[i]);
	}
	cout << ((ss.size() == N) ? "Yes" : "No") << endl;
}