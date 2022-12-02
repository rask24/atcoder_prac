#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int K;
	cin >> K;
	cout << 21 + K / 60 << ":" << setw(2) << setfill('0') << K % 60 << endl;
}