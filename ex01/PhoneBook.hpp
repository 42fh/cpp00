#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define PBSIZE 3

#include <string.h>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	private: Contact contacts[PBSIZE]; int size;
	public: 
		void add(std::string, std::string, std::string, std::string, std::string);
		void print();
		void removeoldest();
		int getsize();
		Contact& getcontact(int);
		PhoneBook();
};

#endif