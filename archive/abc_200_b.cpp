#include <bits/stdc++.h>
using namespace std;

int main()
{
	string N;
	int K;
	cin >> N >> K;
	while (K--) {
		if (stoll(N) % 200 == 0) {
			N = to_string(stoll(N) / 200);
		} else {
			N += "200";
		}
	}
	cout << N << endl;
}
