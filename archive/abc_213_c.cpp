#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;
using namespace std::literals;

int main(void)
{
	int H, W, N;
	cin >> H >> W >> N;
	vector<int> A(N), B(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i] >> B[i];
	vector<int> TA = A;
	vector<int> TB = B;
	sort(TA.begin(), TA.end());
	sort(TB.begin(), TB.end());
	TA.erase(unique(TA.begin(), TA.end()), TA.end());
	TB.erase(unique(TB.begin(), TB.end()), TB.end());

	for (int i = 0; i < N; ++i)
	{
		cout << lower_bound(TA.begin(), TA.end(), A[i]) - TA.begin() + 1 << " ";
		cout << lower_bound(TB.begin(), TB.end(), B[i]) - TB.begin() + 1 << endl;
	}
}