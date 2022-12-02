#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	deque<int> deq;
	for (int i = 0; i < N; ++i) {
		if (i % 2 == 0)
			deq.push_back(a[i]);
		else
			deq.push_front(a[i]);
	}
	if (N % 2 == 1)
		reverse(deq.begin(), deq.end());
	for (auto i : deq)
		cout << i << " ";
	cout << "" << endl;
}