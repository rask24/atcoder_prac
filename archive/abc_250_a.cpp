#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;
using namespace std::literals;

int main()
{
	int H, W, R, C;
	cin >> H >> W >> R >> C;
	int ans = 0;
	if (1 <= R - 1 and R - 1 <= H and 1 <= C and C <= W)
		++ans;
	if (1 <= R + 1 and R + 1 <= H and 1 <= C and C <= W)
		++ans;
	if (1 <= C - 1 and C - 1 <= W and 1 <= R and R <= H)
		++ans;
	if (1 <= C + 1 and C + 1 <= W and 1 <= R and R <= H)
		++ans;
	cout << ans << endl;
}