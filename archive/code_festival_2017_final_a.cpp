#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b){ if (a <= b) { a = b; return true; } else { return false; } }

int main()
{
	string S;
	cin >> S;
	vector<string> A = {"KIH", "B", "R"};
	bool exist = false;
	for (int bit = 0; bit < (1 << 4); ++bit) {
		string T = "";
		for (int i = 0; i < 4; ++i) {
			if (bit & (1 << i)) {
				T += "A";
			}
			if (i < 3)
				T += A[i];
		}
		exist |= S == T;
	}
	cout << ((exist) ? "YES" : "NO") << endl;
}