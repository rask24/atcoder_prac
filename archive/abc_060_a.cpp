#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main()
{
	string A, B, C;
	cin >> A >> B >> C;
	cout << ((A.back() == B.front() and B.back() == C.front()) ? "YES" : "NO") << endl;
}