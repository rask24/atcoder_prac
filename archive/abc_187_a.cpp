#include <bits/stdc++.h>
using namespace std;

int ds(int x)
{
	int ret = 0;
	while (x) {
		ret += x % 10;
		x /= 10;
	}
	return ret;
}

int main()
{
	int A, B;
	cin >> A >> B;
	cout << ((ds(A) > ds(B)) ? ds(A) : ds(B)) << endl;
}