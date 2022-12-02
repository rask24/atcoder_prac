#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> field;
vector<int> A, B;

bool in_field(int x, int y)
{
	if (x < 0 || N <= x || y < 0 || N <= y)
		return false;
	else
		return true;
}

void bfs()
{
	queue<pair<int, int>> que;
	que.push(make_pair(0, 0));
	field[0][0] = 0;

	while (!que.empty()) {
		auto [x, y] = que.front();
		que.pop();
		for (int i = 0; i < A.size(); ++i) {
			if (in_field(x + A[i], y + B[i]) && field[x + A[i]][y + B[i]] == -1) {
				que.push(make_pair(x + A[i], y + B[i]));
				field[x + A[i]][y + B[i]] = field[x][y] + 1;
			}
			if (in_field(x + A[i], y - B[i]) && field[x + A[i]][y - B[i]] == -1) {
				que.push(make_pair(x + A[i], y - B[i]));
				field[x + A[i]][y - B[i]] = field[x][y] + 1;
			}
			if (in_field(x - A[i], y + B[i]) && field[x - A[i]][y + B[i]] == -1) {
				que.push(make_pair(x - A[i], y + B[i]));
				field[x - A[i]][y + B[i]] = field[x][y] + 1;
			}
			if (in_field(x - A[i], y - B[i]) && field[x - A[i]][y - B[i]] == -1) {
				que.push(make_pair(x - A[i], y - B[i]));
				field[x - A[i]][y - B[i]] = field[x][y] + 1;
			}
			if (A[i] == B[i])
				continue;
			if (in_field(x + B[i], y + A[i]) && field[x + B[i]][y + A[i]] == -1) {
				que.push(make_pair(x + B[i], y + A[i]));
				field[x + B[i]][y + A[i]] = field[x][y] + 1;
			}
			if (in_field(x + B[i], y - A[i]) && field[x + B[i]][y - A[i]] == -1) {
				que.push(make_pair(x + B[i], y - A[i]));
				field[x + B[i]][y - A[i]] = field[x][y] + 1;
			}
			if (in_field(x - B[i], y + A[i]) && field[x - B[i]][y + A[i]] == -1) {
				que.push(make_pair(x - B[i], y + A[i]));
				field[x - B[i]][y + A[i]] = field[x][y] + 1;
			}
			if (in_field(x - B[i], y - A[i]) && field[x - B[i]][y - A[i]] == -1) {
				que.push(make_pair(x - B[i], y - A[i]));
				field[x - B[i]][y - A[i]] = field[x][y] + 1;
			}
		}
	}
}

int main()
{
	cin >> N >> M;
	field.assign(N, vector<int> (N, -1));
	for (int a = 0; a * a <= M; ++a) {
		for (int b = a; a * a + b * b <= M; ++b) {
			if (a * a + b * b == M) {
				A.push_back(a);
				B.push_back(b);
			}
		}
	}

	bfs();

	// field
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << field[i][j] << " ";
		}
		cout << "" << endl;
	}

}