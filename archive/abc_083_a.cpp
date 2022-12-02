#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << ((A + B == C + D) ? "Balanced" : ((A + B > C + D) ? "Left" : "Right")) << endl;
}