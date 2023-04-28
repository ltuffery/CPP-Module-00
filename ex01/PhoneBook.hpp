#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void addContact(Contact *contact);
		void displayContact( void );
		void searchContact(std::string index);

	private:
		Contact *contacts[9];
		int		index;


};

#endif
