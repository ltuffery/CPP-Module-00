#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact *contact_form( void )
{
	std::string line;
	Contact *contact = new Contact();

	std::cout << "first name : ";
	std::getline(std::cin, line);
	contact->setFirstName(line);
	std::cout << "last name : ";
	std::getline(std::cin, line);
	contact->setLastName(line);
	std::cout << "nickname : ";
	std::getline(std::cin, line);
	contact->setNickName(line);
	std::cout << "phone number : ";
	std::getline(std::cin, line);
	contact->setPhoneNumber(line);
	std::cout << "darkest secret : ";
	std::getline(std::cin, line);
	contact->setDarkestSecret(line);
	return (contact);
}

int main( void )
{
	std::string line;
	Contact *contact;
	PhoneBook phoneBook;

	std::getline(std::cin, line);
	while (line != "EXIT")
	{
		if (line == "ADD")
		{
			contact = contact_form();
			phoneBook.addContact(contact);
		}
		else if (line == "SEARCH")
		{
			phoneBook.displayContact();
			std::cout << "contact index : ";
			std::getline(std::cin, line);
			phoneBook.searchContact(line);
		}
		std::getline(std::cin, line);
	}
}
