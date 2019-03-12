#include "Contact.class.hpp"

Contact addContact(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
	Contact res;

	std::cout << "Enter first name:";
	getline(std::cin, firstName, '\n');
	std::cout << "Enter last name:";
	getline(std::cin, lastName, '\n');
	std::cout << "Enter nick name:";
	getline(std::cin, nickName, '\n');
	std::cout << "Enter login:";
	getline(std::cin, login, '\n');
	std::cout << "Enter postal address:";
	getline(std::cin, postalAddress, '\n');
	std::cout << "Enter email address:";
	getline(std::cin, emailAddress, '\n');
	std::cout << "Enter phone number:";
	getline(std::cin, phoneNumber, '\n');
	std::cout << "Enter birthday date:";
	getline(std::cin, birthdayDate, '\n');
	std::cout << "Enter favorite meal:";
	getline(std::cin, favoriteMeal, '\n');
	std::cout << "Enter underwear color:";
	getline(std::cin, underwearColor, '\n');
	std::cout << "Enter darkest secret:";
	getline(std::cin, darkestSecret, '\n');
	res = Contact(firstName, lastName, nickName, login, postalAddress,
		emailAddress, phoneNumber, birthdayDate, favoriteMeal, underwearColor,
		darkestSecret);
	return (res);
}