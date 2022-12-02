#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	if (S[0] == '1') {
		cout << "No" << endl;
		return 0;
	}
	vector<int> col(7, 0);
	if (S[1] == '1')
		++col[2];
	if (S[2] == '1')
		++col[4];
	if (S[3] == '1')
		++col[1];
	if (S[4] == '1')
		++col[3];
	if (S[5] == '1')
		++col[5];
	if (S[6] == '1')
		++col[0];
	if (S[7] == '1')
		++col[2];
	if (S[8] == '1')
		++col[4];
	if (S[9] == '1')
		++col[6];
	for (int i = 0; i < 7; ++i) {
		for (int j = i + 2; j < 7; ++j) {
			if (col[i] == 0 || col[j] == 0)
				continue;
			for (int k = i + 1; k < j; ++k) {
				if (col[k] == 0) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
}
