#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstddef>

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
}

PhoneBook::~PhoneBook( void ) {
	for (int i = 0; this->contacts[i] != NULL; i++) {
		delete this->contacts[i];
	}
}

void PhoneBook::addContact(Contact *contact) {
	int count;

	count = this->countContact();
	if (count == 8)
	{
		delete this->contacts[0];
		for (int i = 0; i < count - 1; i++) {
			this->contacts[i] = this->contacts[i + 1];
		}
		this->contacts[count - 1] = contact;
	}
	else
		this->contacts[count] = contact;
}

int PhoneBook::countContact( void ) {
	int	i;

	i = 0;
	while (this->contacts[i] != NULL)
		i++;
	return i;
}
