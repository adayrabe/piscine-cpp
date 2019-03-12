#include "Contact.class.hpp"

Contact::Contact(void){return ;}
Contact::Contact (std::string firstName, std::string lastName, std::string nickName,
		std::string login, std::string postalAddress, std::string emailAddress, 
		std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal,
		std::string underwearColor, std::string darkestSecret): _firstName(firstName),
_lastName(lastName), _nickName(nickName), _login(login), _postalAddress(postalAddress),
_emailAddress(emailAddress), _phoneNumber(phoneNumber), _birthdayDate(birthdayDate),
_favoriteMeal(favoriteMeal), _underwearColor(underwearColor), _darkestSecret(darkestSecret)
{
	return ;
}

Contact::~Contact(){return ;}

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string Contact::getLogin(void) const
{
	return (this->_login);
}

std::string Contact::getPostalAddress(void) const
{
	return (this->_postalAddress);
}

std::string Contact::getEmailAddress(void) const
{
	return (this->_emailAddress);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string Contact::getBirthdayDate(void) const
{
	return (this->_birthdayDate);
}

std::string Contact::getFavoriteMeal(void) const
{
	return (this->_favoriteMeal);
}

std::string Contact::getUnderwearColor(void) const
{
	return (this->_underwearColor);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
