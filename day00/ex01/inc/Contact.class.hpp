#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <string>
#include <iostream>
#include <iomanip>

#define MAX_CONTACTS 8
#define FIELD_WIDTH 10

class Contact
{
	public:
		Contact(void);
		Contact (std::string firstName, std::string lastName, std::string nickName,
			std::string login, std::string postalAddress, std::string emailAddress, 
			std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal,
			std::string underwearColor, std::string darkestSecret);
		~Contact(void);
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getLogin(void) const;
		std::string getPostalAddress(void) const;
		std::string getEmailAddress(void) const;
		std::string getPhoneNumber(void) const;
		std::string getBirthdayDate(void) const;
		std::string getFavoriteMeal(void) const;
		std::string getUnderwearColor(void) const;
		std::string getDarkestSecret(void) const;

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _login;
		std::string _postalAddress;
		std::string _emailAddress;
		std::string _phoneNumber;
		std::string _birthdayDate;
		std::string _favoriteMeal;
		std::string _underwearColor;
		std::string _darkestSecret;
};

Contact addContact(void);
void showPhonebook(const Contact phonebook[MAX_CONTACTS], int amount);
#endif
