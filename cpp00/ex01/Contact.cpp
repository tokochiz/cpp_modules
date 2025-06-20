#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
    firstName = "";
    lastName = "";
    phoneNumber = "";
    nickname = "";
    darkestSecret = "";
}
/**
 * setters
 */
void Contact::setFirstName(std::string value)
{
    firstName = value;
}

void Contact::setLastName(std::string value)
{
    lastName = value;
}

void Contact::setPhoneNumber(std::string value)
{
    phoneNumber = value;
}

void Contact::setNickname(std::string value)
{
    nickname = value;
}
void Contact::setDarkestSecret(std::string value)
{
	darkestSecret = value;
}

/**
 * getters
 */
std::string Contact::getFirstName() const
{
	return firstName;
}

std::string Contact::getLastName() const
{
	return lastName;
}

std::string Contact::getPhoneNumber() const
{
	return phoneNumber;
}

std::string Contact::getNickname() const
{
	return nickname;
}

std::string Contact::getDarkestSecret() const
{
	return darkestSecret;
}