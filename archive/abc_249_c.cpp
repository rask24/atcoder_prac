#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>

int main()
{
	int N, K;
	std::cin >> N >> K;
	std::vector<std::string> S(N);
	for (int i = 0; i < N; ++i)
		std::cin >> S[i];
	int ans = 0;
	for (long long bit = 1LL; bit < (1LL << N); ++bit)
	{
		std::vector<int> v(128, 0);
		for (int i = 0; i < N; ++i)
		{
			if (bit & (1LL << i))
			{
				for (int j = 0; j < S[i].length(); ++j)
				{
					++v[S[i][j]];
				}
			}
		}
		int count = 0;
		for (int i = 0; i < 128; ++i)
		{
			if (v[i] == K)
				++count;
		}
		ans = std::max(count, ans);
	}
	std::cout << ans << std::endl;
}