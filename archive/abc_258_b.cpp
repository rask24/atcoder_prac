#include <bits/stdc++.h>
using namespace std;

template <class T> void chmax(T &a, T b)
{
	if (a < b)
		a = b;
}

int N;
vector<string> M;

string right(int i, int j)
{
	string ret;
	for (int k = 0; k < N; ++k)
		ret.push_back(M[i][(j + k) % N]);
	return ret;
}

string left(int i, int j)
{
	string ret;
	for (int k = 0; k < N; ++k)
		ret.push_back(M[i][(j - k + N) % N]);
	return ret;
}

string up(int i, int j)
{
	string ret;
	for (int k = 0; k < N; ++k)
		ret.push_back(M[(i - k + N) % N][j]);
	return ret;
}

string down(int i, int j)
{
	string ret;
	for (int k = 0; k < N; ++k)
		ret.push_back(M[(i + k) % N][j]);
	return ret;
}

string right_up(int i, int j)
{
	string ret;
	for (int k = 0; k < N; ++k)
		ret.push_back(M[(i - k + N) % N][(j + k) % N]);
	return ret;
}

string right_down(int i, int j)
{
	string ret;
	for (int k = 0; k < N; ++k)
		ret.push_back(M[(i + k) % N][(j + k) % N]);
	return ret;
}

string left_up(int i, int j)
{
	string ret;
	for (int k = 0; k < N; ++k)
		ret.push_back(M[(i - k + N) % N][(j - k + N) % N]);
	return ret;
}

string left_down(int i, int j)
{
	string ret;
	for (int k = 0; k < N; ++k)
		ret.push_back(M[(i + k) % N][(j - k + N) % N]);
	return ret;
}

int main(void)
{
	cin >> N;
	M.resize(N);
	for (int i = 0; i < N; ++i)
		cin >> M[i];
	string ans = "0";
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			chmax(ans, right(i, j));
			chmax(ans, left(i, j));
			chmax(ans, up(i, j));
			chmax(ans, down(i, j));
			chmax(ans, right_up(i, j));
			chmax(ans, right_down(i, j));
			chmax(ans, left_up(i, j));
			chmax(ans, left_down(i, j));
		}
	}
	cout << ans << endl;
}