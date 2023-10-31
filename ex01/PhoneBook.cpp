#include "PhoneBook.hpp"

void PhoneBook::removeoldest()
{
	for (size_t i = 0; i < PBSIZE - 1; i++)
		contacts[i] = contacts[i + 1];
}

void PhoneBook::add(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	if (size < PBSIZE)
	{
		contacts[size] = Contact(a, b, c, d, e);
		size++;
	}
	else if (size == PBSIZE)
	{
		this->removeoldest();
		contacts[size - 1] = Contact(a, b, c, d, e);
	}
}

void print_truncated(std::string str, unsigned long n)
{
	(str.length() < n + 1) ? std::cout << str : std::cout << str.substr(0, n - 1) + ".";
}

// print the phonebook
void PhoneBook::print()
{
	if (size == 0)
		std::cout << "the phonebook is empty, nothing to show" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << "|" << std::setw(10);
		std::cout << i << std::setw(0) << "|";
		
		std::cout << std::setw(10);

		print_truncated(contacts[i].getfirstname(), 10);
		std::cout << std::setw(0) << "|";

		std::cout << std::setw(10);
		print_truncated(contacts[i].getlastname(), 10);
		std::cout << std::setw(0) << "|";

		std::cout << std::setw(10);
		print_truncated(contacts[i].getnickname(), 10);
		std::cout << std::setw(0) << "|" << std::endl;
	}
}

// PhoneBook default constructor
PhoneBook::PhoneBook()
{
	size = 0;
}