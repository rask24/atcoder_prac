#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string S;
	cin >> S;
	int p = 0;
	int min_p = 0;
	for (int i = 0; i < N; ++i) {
		p += (S[i] == '(') ? +1 : -1;
		min_p = min(min_p, p);
	}
	for (int i = 0; i < -min_p; ++i) {
		cout << '(';
	}
	cout << S;
	for (int i = 0; i < p - min_p; ++i) {
		cout << ')';
	}
	cout << endl;
}