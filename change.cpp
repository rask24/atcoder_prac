#include <iostream>
#include <cstdio>
#include <string>

int main()
{
	std::string old_filename = "./archive/tmp.cpp";
	std::string new_filename;
	std::cin >> new_filename;
	new_filename = "./archive/" + new_filename + ".cpp";

	if (rename(old_filename.c_str(), new_filename.c_str()) != 0)
		perror("Error renaming file");
	else
		std::cout << "file named successfully" << std::endl;
}
