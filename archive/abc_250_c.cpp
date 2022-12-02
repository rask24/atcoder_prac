#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, Q;
	cin >> N >> Q;
	vector<int> pos(N), val(N);
	for (int i = 0; i < N; ++i) {
		pos[i] = val[i] = i;
	}
	while (Q--) {
		int x;
		cin >> x;
		int v = x - 1;
		int pos1 = pos[v];
		int pos2 = (pos1 == (N - 1)) ? pos1 - 1 : pos1 + 1;
		int val1 = val[pos1];
		int val2 = val[pos2];
		swap(val[pos1], val[pos2]);
		swap(pos[val1], pos[val2]);
	}
	for (int i : val)
		cout << i + 1 << " ";
	cout << endl;
}