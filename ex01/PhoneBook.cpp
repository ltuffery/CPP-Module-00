#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cctype>
#include <cstdio>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook( void ) {
	this->contacts[0] = NULL;
	this->contacts[1] = NULL;
	this->contacts[2] = NULL;
	this->contacts[3] = NULL;
	this->contacts[4] = NULL;
	this->contacts[5] = NULL;
	this->contacts[6] = NULL;
	this->contacts[7] = NULL;
	this->contacts[8] = NULL;
	this->index = 0;
}

PhoneBook::~PhoneBook( void ) {
	for (int i = 0; this->contacts[i] != NULL; i++) {
		delete this->contacts[i];
	}
}

void PhoneBook::addContact(Contact *contact) {
	if (this->index == 8)
		this->index = 0;
	if (this->contacts[this->index] != NULL)
		delete this->contacts[this->index];
	this->contacts[this->index] = contact;
	this->index++;
}

void PhoneBook::displayContact( void ) {
	std::string firstName;
	std::string lastName;
	std::string nickname;

	std::cout << "     index|first name| last name|  nickname\n";
	for (int i = 0; this->contacts[i] != NULL; i++)
	{
		if (this->contacts[i]->getFirstName().length() > 10)
			firstName = this->contacts[i]->getFirstName().substr(0, 9) + ".";
		else
			firstName = this->contacts[i]->getFirstName();
		if (this->contacts[i]->getLastName().length() > 10)
			lastName = this->contacts[i]->getLastName().substr(0, 9) + ".";
		else
		 	lastName = this->contacts[i]->getLastName();
		if (this->contacts[i]->getNickName().length() > 10)
			nickname = this->contacts[i]->getNickName().substr(0, 9) + ".";
		else
		 	nickname = this->contacts[i]->getNickName();
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << firstName << "|";
		std::cout << std::setw(10) << lastName << "|";
		std::cout << std::setw(10) << nickname << std::endl;
	}
}

void PhoneBook::searchContact(std::string index) {
	int n;

	for (int i = 0; index[i] != '\0'; i++)
	{
		if (std::isalpha(index[i]))
		{
			std::cout << "the index can only have numbers" << std::endl;
			return;
		}
	}
	if (index.empty())
	{
		std::cout << "this index not exist" << std::endl;
		return;
	}
	std::sscanf(index.c_str(), "%d", &n);
	if (n < 7 && n > -1)
	{
		if (this->contacts[n] != NULL)
		{
			std::cout << "First name : " << this->contacts[n]->getFirstName() << std::endl;
			std::cout << "Last name : " << this->contacts[n]->getLastName() << std::endl;
			std::cout << "Nickname : " << this->contacts[n]->getNickName() << std::endl;
			std::cout << "Phone number : " << this->contacts[n]->getPhoneNumber() << std::endl;
			std::cout << "Darkest secret : " << this->contacts[n]->getDarkestSecret() << std::endl;
			return ;
		}
	}
	std::cout << "this index not exist" << std::endl;
}
