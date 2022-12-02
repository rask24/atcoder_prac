#include <bits/stdc++.h>
using namespace std;

vector<string> d = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main()
{
	string S;
	cin >> S;
	for (int i = 0; i < d.size(); ++i) {
		if (S == d[i]) {
			cout << (7 - i) << endl;
			return 0;
		}
	}
}