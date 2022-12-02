#include <iostream>
#include <algorithm>

int main()
{
	int A, B, C;
	int D, E, F;
	int X;

	std::cin >> A >> B >> C >> D >> E >> F >> X;

	int Takahashi =  (X / (A + C)) * A * B + std::min((X % (A + C)), A) * B;
	int Aoki =  (X / (D + F)) * D * E + std::min((X % (D + F)), D) * E;

	if (Takahashi > Aoki)
		std::cout << "Takahashi" << std::endl;
	else if (Takahashi < Aoki)
		std::cout << "Aoki" << std::endl;
	else
		std::cout << "Draw" << std::endl;
}