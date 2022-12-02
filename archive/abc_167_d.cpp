#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, K;
	cin >> N >> K;
	vector<int> A(N);
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		--A[i];
	}

	vector<int> R(N, false), line, loop;
	int start = 0;
	while (!R[start]) {
		R[start] = true;
		start = A[start];
	}
	for (int i = 0; i != start; i = A[i])
		line.push_back(i);
	loop.push_back(start);
	for (int i = A[start]; i != start; i = A[i])
		loop.push_back(i);

	if (K < line.size())
		cout << line[K] + 1 << endl;
	else
		cout << loop[(K - line.size()) % loop.size()] + 1 << endl;
}