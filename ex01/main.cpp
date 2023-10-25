#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	add(PhoneBook& book)
{
	book.add("A", "B", "C", "D");
}

int main() {

	PhoneBook b; std::string str;

	for (;;){
		std::cin >> str;
		if (str == "EXIT")
			break;
		else if (str == "ADD")
			std::cout << "(ADD)" << std::endl;
		else if (str == "SEARCH")
			std::cout << "dSEARCHb" << std::endl;
		else
			std::cout << "invalid commant" << std::endl;
	}
}