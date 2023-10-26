#include "PhoneBook.hpp"

void PhoneBook::add(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	if (size < PBSIZE)
	{
		std::cout << "size = " << size << std::endl;
		contacts[size++] = Contact(a, b, c, d, e);
		std::cout << PhoneBook::contacts[0].firstname << std::endl;
	}
	else
		std::cout << "PhoneBook is full" << std::endl;
}

// print the phonebook
void PhoneBook::print()
{
	for (int i = 0; i < size; i++)
		contacts[i].print();
}

// PhoneBook default constructor
PhoneBook::PhoneBook()
{
	size = 0;
}