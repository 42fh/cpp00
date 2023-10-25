#include <iostream>
#include "Contact.hpp"

void Contact::foo()
{
	std::cout << "Hello foo!" << std::endl;
}

Contact::Contact()
{
	std::cout << "Contact constr" << std::endl;
	this->firstname = "fish";
}