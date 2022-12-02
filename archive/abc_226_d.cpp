#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { return ((b == 0) ? a : gcd(b, a % b)); }

int main()
{
	int N;
	cin >> N;
	set<pair<long long, long long>> s;
	vector<long long> x(N), y(N);
	for (int i = 0; i < N; ++i)
		cin >> x[i] >> y[i];
	
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			if (x[j] - x[i] == 0) {
				s.insert(make_pair(0, 1));
				s.insert(make_pair(0, -1));
			} else if (y[j] - y[i] == 0) {
				s.insert(make_pair(1, 0));
				s.insert(make_pair(-1, 0));
			} else {
				long long g = gcd(x[j] - x[i], y[j] - y[i]);
				s.insert(make_pair((x[j] - x[i]) / g, (y[j] - y[i]) / g));
				s.insert(make_pair((x[i] - x[j]) / g, (y[i] - y[j]) / g));
			}
		}
	}
	cout << s.size() << endl;
}