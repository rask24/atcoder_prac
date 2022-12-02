#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, X;
	cin >> N >> X;
	string S;
	cin >> S;
	deque<char> deq;
	for (int i = 0; i < N; ++i) {
		if (!deq.empty() && (deq.back() == 'R' || deq.back() == 'L') && S[i] == 'U') {
			deq.pop_back();
		} else {
			deq.push_back(S[i]);
		}
	}
	while (!deq.empty()) {
		if (deq.front() == 'L')
			X *= 2;
		else if (deq.front() == 'R')
			X = 2 * X + 1;
		else
			X /= 2;
		deq.pop_front();
	}
	cout << X << endl;
}