#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "default Contact constr" << std::endl;
	this->firstname = "fish";
}

Contact::Contact(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	std::cout << "full Contact constr" << std::endl;
	this->firstname = a;
	lastname = b;
	this->nickname = c;
	phonenumber = d;
	this->secret = e;
}

// print all members of contact class
void Contact::print()
{
	std::cout << "firstname: " << this->firstname << " lastname: " << this->lastname << std::endl;
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

