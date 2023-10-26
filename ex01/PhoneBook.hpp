#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define PBSIZE 8

#include <string.h>
#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	private: Contact contacts[PBSIZE]; int size;
	public: 
		void add(std::string, std::string, std::string, std::string, std::string);
		void print();
		PhoneBook();
};

#endif