#include <iostream>

int main(int argc, char* argv[]) {
	if(argc != 2) std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {std::string input; input = argv[1];
		for (std::string::iterator i = input.begin(); i < input.end(); i++)
			{*i = ::toupper(*i);}
		std::cout << input << std::endl;}
	return 0;}