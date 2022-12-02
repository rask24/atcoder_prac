#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string S = "1";
	for (int i = 2; i <= N; ++i)
	{
		S = S + " " + to_string(i) + " " + S;
	}
	cout << S << endl;
}