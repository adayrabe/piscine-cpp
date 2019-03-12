#include "Contact.class.hpp"

// Contact make_contact()
// {

// }

int main()
{
	Contact phonebook[MAX_CONTACTS];
	std::string command;
	int index;

	std::cout << "Available commands:" << std::endl;
	std::cout << "ADD to add a contact" << std::endl;
	std::cout << "SEARCH to search for a contact" << std::endl;
	std::cout << "EXIT to exit program" << std::endl;
	index = 0;
	phonebook[index++] = Contact("First", "Last", "Nick", "Login", "Postal Address",
		"Email Address", "Phone Number", "Birthday Date", "Favorite Meal",
		"Underwear Color", "Darkest Secret");
	while (1)
	{
		// std::cout << "Enter command:" << std::endl;
		getline(std::cin, command, '\n');
		if (command == "ADD")
		{
			if (index < MAX_CONTACTS)
			{
				phonebook[index] = addContact();
				index++;
			}
			else
				std::cout << "The phonebook is full!" << std::endl;
		}
		else if (command == "SEARCH")
			showPhonebook(phonebook, index);
		else if (command == "EXIT")
			return (0) ;
	}
	return (0);
}