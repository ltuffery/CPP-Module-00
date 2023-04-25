#include "Contact.hpp"
#include "PhoneBook.hpp"
int main( void )
{
	PhoneBook phoneBook;
	Contact *contact = new Contact();

	contact->setFirstName("oui");
	phoneBook.addContact(contact);
	phoneBook.addContact(contact);
	phoneBook.addContact(contact);
	phoneBook.addContact(contact);
	phoneBook.addContact(contact);
	phoneBook.addContact(contact);
	phoneBook.addContact(contact);
	phoneBook.addContact(contact);
	phoneBook.addContact(contact);
	phoneBook.addContact(contact);
}
