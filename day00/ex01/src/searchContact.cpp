#include "Contact.class.hpp"

void searchContact(const Contact phonebook[MAX_CONTACTS], int amount)
{
	int index;

	std::cout << "Enter index: ";
	std::cin >> index;

	if (std::cin.good() && index >= 0 && index < amount)
	{
		std::cout << phonebook[index].getFirstName() << std::endl;
		std::cout << phonebook[index].getLastName() << std::endl;
		std::cout << phonebook[index].getNickName() << std::endl;
		std::cout << phonebook[index].getLogin() << std::endl;
		std::cout << phonebook[index].getPostalAddress() << std::endl;
		std::cout << phonebook[index].getEmailAddress() << std::endl;
		std::cout << phonebook[index].getPhoneNumber() << std::endl;
		std::cout << phonebook[index].getBirthdayDate() << std::endl;
		std::cout << phonebook[index].getFavoriteMeal() << std::endl;
		std::cout << phonebook[index].getUnderwearColor() << std::endl;
		std::cout << phonebook[index].getDarkestSecret() << std::endl;
	}
	else
	{
		std::cin.clear();
		std::cout << "Wrong index" << std::endl;
	}
}

void print_str(std::string str)
{
	std::cout << std::setw(FIELD_WIDTH);
	if (str.length() > FIELD_WIDTH)
	{
		str = str.erase((FIELD_WIDTH - 1), str.length() - (FIELD_WIDTH - 1));
		str = str.append(".");
	}
	std::cout << str;
	std::cout << "|";
}

void showPhonebook(const Contact phonebook[MAX_CONTACTS], int amount)
{
	std::cout << "|";
	print_str("index");
	print_str("first name");
	print_str("last name");
	print_str("nickname");
	std::cout << std::endl;
	for (int i = 0; i < amount; i++)
	{
		std::cout << "|";
		print_str(std::to_string(i));
		print_str(phonebook[i].getFirstName());
		print_str(phonebook[i].getLastName());
		print_str(phonebook[i].getNickName());
		std::cout << std::endl;
	}
	searchContact(phonebook, amount);
}
