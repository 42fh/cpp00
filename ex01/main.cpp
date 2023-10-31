#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	add(PhoneBook& book)
{
	std::string firstname, lastname, nickname, phonenumber, secret;
	std::cout << "Please enter: firstname, lastname, nickname, phonenumber and secret" << std::endl;
	std::cin.sync();
	std::getline(std::cin, firstname);
	std::getline(std::cin, lastname);
	std::getline(std::cin, nickname);
	std::getline(std::cin, phonenumber);
	std::getline(std::cin, secret);
	//if one of 5 strings is empty:
	if (firstname.empty() || lastname.empty() || nickname.empty() || phonenumber.empty() || secret.empty())
		std::cout << "You entered:" 
		<< "[" << firstname << "]" << lastname << nickname << phonenumber << secret << std::endl
		<< "Please enter non empty strings 5 strings" << std::endl;
	else
		book.add(firstname, lastname, nickname, phonenumber, secret);
}

// if (firstname != "" && lastname != "" && nickname != "" && phonenumber != "" && secret != "")
// 	book.add(firstname, lastname, nickname, phonenumber, secret);
// else
// 	std::cout << "Please enter 5 strings" << std::endl;

void search(PhoneBook& book)
{
	book.print();
	std::cout << std::endl << "please enter an index to show" << std::endl;
}

int main() {

	PhoneBook b; std::string str;

	for (;;){
		std::cin >> str;
		if (str == "EXIT")
			break;
		else if (str == "ADD")
			add(b);
		else if (str == "SEARCH")
			search(b);
		else
			std::cout << "invalid command" << std::endl;
	}
}