#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
	this->firstname = "fish";
}

Contact::Contact(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	this->firstname = a;
	lastname = b;
	this->nickname = c;
	phonenumber = d;
	this->secret = e;
}

// print all members of contact class
void Contact::print()
{
	std::cout << "firstname: " << this->firstname << std::endl;
	std::cout << "lastname: " << this->lastname << std::endl;
}

std::string Contact::getfirstname() const {return firstname;}
std::string Contact::getlastname() const {return lastname;}
std::string Contact::getnickname() const {return nickname;}
std::string Contact::getphonenumber() const {return phonenumber;}
std::string Contact::getsecret() const {return secret;}

std::ostream& operator<<(std::ostream& os, const Contact& p)
{
    return os << "firstname: " << p.getfirstname() << std::endl
    					<< "lastname: " << p.getlastname() << std::endl
    					<< "nickname: " << p.getnickname() << std::endl
    					<< "phonenumber: " << p.getphonenumber() << std::endl
    					<< "secret: " << p.getsecret() << std::endl;
}


// // Contact assignment operator overload implementation
// Contact& Contact::operator=(const Contact& other)
// {
// 	std::cout << "Contact assignment operator" << std::endl;
// 	// Assign the 5 variables
// 	this->firstname = other.firstname;
// 	this->lastname = other.lastname;
// 	this->nickname = other.nickname;
// 	this->phonenumber = other.phonenumber;
// 	this->secret = other.secret;
// 	return *this;
// }

