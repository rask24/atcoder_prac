#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a < b) { a = b; return true; } else { return false; } }

int main()
{
	int N;
	cin >> N;
	vector<int> dist(N);
	for (int i = 0; i < N; ++i) {
		if (1 == i + 1)
			continue;
		cout << "? 1 " << i + 1 << endl;
		cin >> dist[i];
	}
	int val = -1, key = -1;
	for (int i = 0; i < N; ++i) {
		if (chmax(val, dist[i])) {
			key = i;
		}
	}
	for (int i = 0; i < N; ++i) {
		if (key == i)
			continue;
		cout << "? " << key + 1 << " " << i + 1 << endl;
		cin >> dist[i];
	}
	val = -1;
	for (int i = 0; i < N; ++i) {
		chmax(val, dist[i]);
	}
	cout << "! " << val << endl;
}