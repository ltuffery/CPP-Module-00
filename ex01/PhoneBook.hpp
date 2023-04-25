#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void addContact(Contact *contact);

	private:
		Contact *contacts[9];

		int countContact( void );

};

#endif
