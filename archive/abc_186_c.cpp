#include <bits/stdc++.h>
using namespace std;

bool dec_seven(int N)
{
	while (N) {
		if (N % 10 == 7)
			return false;
		N /= 10;
	}
	return true;
}

bool oct_seven(int N)
{
	while (N) {
		if (N % 8 == 7)
			return false;
		N /= 8;
	}
	return true;
}

int main()
{
	int N;
	cin >> N;
	long long ans = 0;
	for (int i = 1; i <= N; ++i) {
		if (dec_seven(i) and oct_seven(i))
			++ans;
	}
	cout << ans << endl;
}