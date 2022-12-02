#include <bits/stdc++.h>
using namespace std;

bool is_rot(string S)
{
	for (int i = 0; i < S.size() / 2; ++i) {
		if (S[i] != S[S.size() - i - 1])
			return false;
	}
	return true;
}

int main()
{
	string S, T;
	cin >> S;
	int head = 0, tail = 0;
	int N = S.size();
	while (head < N and S[head] == 'a')
		++head;
	while (N - tail > 0 and S[N - tail - 1] == 'a')
		++tail;
	T = "";
	for (int i = 0; i < tail - head; ++i)
		T += 'a';
	T += S;
	cout << ((is_rot(T)) ? "Yes" : "No") << endl;
}