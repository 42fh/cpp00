#ifndef CONTACT_HPP 
# define CONTACT_HPP

#include <string>

class Contact {
	private: std::string firstname, lastname, nickname, phonenumber, secret;
	public: 
		Contact(); 
		Contact(std::string, std::string, std::string, std::string, std::string);
		void print();
		std::string getfirstname() const;
		std::string getlastname() const;
		std::string getnickname() const;
		std::string getphonenumber() const;
		std::string getsecret() const;

};

std::ostream& operator<<(std::ostream& os, const Contact& p);

#endif

