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

// print the phonebook
void PhoneBook::print()
{
	for (int i = 0; i < size; i++)
	{
		cout.width (10);
		cout << x;
		cout.width (10);
		cout << y << endl;
		contacts[i].print();
	}
}

// PhoneBook default constructor
PhoneBook::PhoneBook()
{
	size = 0;
}