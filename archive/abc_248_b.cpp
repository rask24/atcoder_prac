#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>

int main()
{
	long long A, B, K;
	std::cin >> A >> B >> K;
	int ans = 0;

	while (A < B)
	{
		A *= K;
		++ans;
	}
	std::cout << ans << std::endl;
}