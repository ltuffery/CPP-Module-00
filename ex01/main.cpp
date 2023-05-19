#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string field(std::string name)
{
	std::string line;

	std::cout << name;
	std::getline(std::cin, line);
	while (std::cin) {
		if (line == "") {
			std::cout << "the field cannot be empty, try again : ";
			std::getline(std::cin, line);
		} else {
			break;
		}
	}
	return (line);
}

Contact *contact_form( void )
{
	std::string line;
	Contact *contact = new Contact();

	line = field("first name : ");
	contact->setFirstName(line);
	line = field("last name : ");
	contact->setLastName(line);
	line = field("nickname : ");
	contact->setNickName(line);
	line = field("phone number : ");
	contact->setPhoneNumber(line);
	line = field("darkest secret : ");
	contact->setDarkestSecret(line);
	return (contact);
}

int main( void )
{
	std::string line;
	Contact *contact;
	PhoneBook phoneBook;

	std::getline(std::cin, line);
	while (std::cin) {
		if (line == "ADD") {
			contact = contact_form();
			phoneBook.addContact(contact);
		}
		else if (line == "SEARCH") {
			phoneBook.displayContact();
			std::cout << "contact index : ";
			std::getline(std::cin, line);
			phoneBook.searchContact(line);
		}
		else if (line == "EXIT") {
			break;
		}
		std::getline(std::cin, line);
	}
}
