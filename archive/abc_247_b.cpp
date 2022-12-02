#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> s(N), t(N);
	for (int i = 0; i < N; ++i)
		cin >> s[i] >> t[i];
	
	for (int i = 0; i < N; ++i)
	{
		string a, b;
		bool  is_s = false;
		bool  is_t = false;
		a = s[i];
		b = t[i];
		for (int j = 0; j < N; ++j)
		{
			if (i == j)
				continue;
			if (a == s[j] or a == t[j])
				is_s = true;
			if (b == s[j] or b == t[j])
				is_t = true;
		}
		if (is_s and is_t)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}