#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <iomanip>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	sort(a.begin(), a.end());

	int count = 1;
	int now = a[0];
	for (int i = 1; i < N; ++i)
	{
		if (a[i] != now)
		{
			now = a[i];
			++count;
		}
	}
	cout << count << endl;
}