#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string.h>
#include <iostream>

class PhoneBook {
	private: Contact contacts[8]; int size;
	public: void add(std::string, std::string, std::string, std::string);
};

#endif