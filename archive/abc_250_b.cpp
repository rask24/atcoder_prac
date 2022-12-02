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
	int N, A, B;
	cin >> N >> A >> B;
	for (int i = 0; i < A * N; ++i)
	{
		for (int j = 0; j < B * N; ++j)
		{
			if ((((i / A) % 2) + ((j / B) % 2))% 2 == 0)
				cout << ".";
			else
				cout << "#";
		}
		cout << endl;
	}
}