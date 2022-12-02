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

string X;

bool new_string_comp(string S1, string S2)
{
	int i = 0;
	while (S1[i] == S2[i])
		++i;
	if (S1[i] == '\0')
		return true;
	else if (S2[i] == '\0')
		return false;
	return X.find(S1[i]) < X.find(S2[i]);
}

int main(void)
{
	int N;
	cin >> X >> N;
	vector<string> S(N);
	for (int i = 0; i < N; ++i)
		cin >> S[i];
	
	sort(S.begin(), S.end(), new_string_comp);
	for (int i = 0; i < N; ++i)
		cout << S[i] << endl;
}