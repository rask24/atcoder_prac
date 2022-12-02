#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>

int main()
{
	char S[100];
	std::cin >> S;
	std::vector<int> v(128, 0);

	bool lower = false;
	bool upper = false;
	bool repeat = false;
	for (int i = 0; S[i]; ++i)
	{
		++v[S[i]];
		if (v[S[i]] > 1)
			repeat = true;
		if (islower(S[i]))
			lower = true;
		if (isupper(S[i]))
			upper = true;
	}
	if (lower and upper and !repeat)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}