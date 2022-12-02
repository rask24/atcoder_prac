#include <bits/stdc++.h>
using namespace std;

vector<string> D = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

int main()
{
	string S;
	cin >> S;
	for (int i = 0; i < D.size(); ++i) {
		if (S == D[i]) {
			cout << 5 - i << endl;
		}
	}
}
