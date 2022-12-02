#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>

int main()
{
	std::string S;
	std::cin >> S;
	std::vector<int> v(10, 0);
	for (int i = 0; i < 10; ++i)
		++v[S[i] - '0'];
	for (int i = 0; i < 10; ++i)
	{
		if (v[i] == 0)
			std::cout << i << std::endl;
	}
}