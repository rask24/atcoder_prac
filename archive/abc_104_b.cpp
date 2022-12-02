#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int N;
	string S;
	cin >> N >> S;
	long long ans = 0;
	for (int i = 0; i < N; ++i) {
		vector<int> dna(4, 0);
		for (int j = i; j < N; ++j) {
			if (S[j] == 'A')
				++dna[0];
			else if (S[j] == 'T')
				++dna[1];
			else if (S[j] == 'G')
				++dna[2];
			else if (S[j] == 'C')
				++dna[3];
			if (dna[0] == dna[1] && dna[2] == dna[3])
				++ans;
		}
	}
	cout << ans << endl;
}