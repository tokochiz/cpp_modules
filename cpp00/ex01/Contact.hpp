#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
    public:
        Contact();
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setPhoneNumber(std::string phoneNumber);
        void setNickname(std::string nickname);
        void setDarkestSecret(std::string darkestSecret);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getPhoneNumber() const;
        std::string getNickname() const;
        std::string getDarkestSecret() const;
    private:
        std::string firstName;
        std::string lastName;
        std::string phoneNumber;
        std::string nickname;
        std::string darkestSecret;
};

#endif // CONTACT_HPP