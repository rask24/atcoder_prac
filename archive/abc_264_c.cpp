#include <bits/stdc++.h>
using namespace std;

int H1, W1;
int H2, W2;
vector<vector<int>> row_vec;
vector<vector<int>> col_vec;

void set_row_vec(vector<int> v)
{
	if (v.size() == H2) {
		row_vec.push_back(v);
		return ;
	}
	for (int i = (v.size() == 0) ? 0 : v[v.size() - 1] + 1; i < H1; ++i) {
		v.push_back(i);
		set_row_vec(v);
		v.pop_back();
	}
}

void set_col_vec(vector<int> v)
{
	if (v.size() == W2) {
		col_vec.push_back(v);
		return ;
	}
	for (int i = (v.size() == 0) ? 0 : v[v.size() - 1] + 1; i < W1; ++i) {
		v.push_back(i);
		set_col_vec(v);
		v.pop_back();
	}
}

bool check(vector<vector<int>> &A, vector<vector<int>> &B, int s, int t)
{
	for (int i = 0; i < H2; ++i) {
		for (int j = 0; j < W2; ++j) {
			if (B[i][j] != A[row_vec[s][i]][col_vec[t][j]])
				return false;
		}
	}
	return true;
}

int main()
{
	cin >> H1 >> W1;
	vector<vector<int>> A(H1, vector<int> (W1));
	for (int i = 0; i < H1; ++i) {
		for (int j = 0; j < W1; ++j) {
			cin >> A[i][j];
		}
	}
	cin >> H2 >> W2;
	vector<vector<int>> B(H2, vector<int> (W2));
	for (int i = 0; i < H2; ++i) {
		for (int j = 0; j < W2; ++j) {
			cin >> B[i][j];
		}
	}
	vector<int> v;
	set_row_vec(v);
	vector<int> w;
	set_col_vec(w);

	for (int i = 0; i < row_vec.size(); ++i) {
		for (int j = 0; j < col_vec.size(); ++j) {
			if (check(A, B, i, j)) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
}