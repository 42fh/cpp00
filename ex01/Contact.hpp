#ifndef CONTACT_HPP 
# define CONTACT_HPP

#include <string>

class Contact {
	public: std::string firstname, lastname, nickname, phonenumber, secret;
	public: Contact(); Contact(std::string, std::string, std::string, std::string, std::string);
		void print();
		// Contact& Contact::operator= (const Contact& fraction);
	
};

#endif

