#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> rank(9, 0);
	vector<int> level = {1, 400, 800, 1200, 1600, 2000, 2400, 2800, 3200, 5000};
	for (int i = 0; i < N; ++i) {
		int a;
		cin >> a;
		for (int j = 0; j < level.size() - 1; ++j) {
			if (level[j] <= a && a < level[j + 1]) {
				++rank[j];
			}
		}
	}
	int x = 0;
	for (int i = 0; i < 8; ++i) {
		if (rank[i])
			++x;
	}
	if (x == 0)
		cout << 1 << " " << rank.back() << endl;
	else
		cout << x << " " << x + rank.back() << endl;
}