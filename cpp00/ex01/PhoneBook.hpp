#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

class PhoneBook {
    public:
        PhoneBook();
        void addContact();
        void searchContact();
        void exitPhoneBook();
    private:
        Contact contacts[8];
        int currentIndex;
        int contactCount;
        std::string formatString(const std::string& str);
};

#endif

