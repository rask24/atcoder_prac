#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <deque>
#include <set>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	
	int left = -1, right = N + 1;
	while (right - left > 1) {
		int mid = left + (right - left) / 2;
		set<int> s;
		for (int i = 0; i < N; ++i) {
			if (a[i] <= mid)
				s.insert(a[i]);
		}
		if (mid <= s.size() + (N - s.size()) / 2)
			left = mid;
		else
			right = mid;
	}
	cout << left << endl;
}