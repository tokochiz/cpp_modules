#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <sstream>

PhoneBook::PhoneBook()
{
    currentIndex = 0;
    contactCount = 0;
}

void PhoneBook::addContact() {
    Contact& contact = contacts[currentIndex];
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "First name cannot be empty!" << std::endl;
        return;
    }
    contact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Last name cannot be empty!" << std::endl;
        return;
    }
    contact.setLastName(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Phone number cannot be empty!" << std::endl;
        return;
    }
    contact.setPhoneNumber(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Nickname cannot be empty!" << std::endl;
        return;
    }
    contact.setNickname(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Darkest secret cannot be empty!" << std::endl;
        return;
    }
    contact.setDarkestSecret(input);

    currentIndex = (currentIndex + 1) % 8;
    if (contactCount < 8) {
        contactCount++;
    }
    std::cout << "Contact added successfully!" << std::endl;
}

std::string PhoneBook::formatString(const std::string& str) {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::searchContact() {
    if (contactCount == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << "----------|----------|----------|----------" << std::endl;
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;

    for (int i = 0; i < contactCount; i++) {
        const Contact& contact = contacts[i];
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << formatString(contact.getFirstName()) << "|"
                  << std::setw(10) << formatString(contact.getLastName()) << "|"
                  << std::setw(10) << formatString(contact.getNickname())
                  << std::endl;
    }
    std::cout << "----------|----------|----------|----------" << std::endl;

    std::cout << "Enter index of contact to view details (0 to " << (contactCount - 1) << "): ";
    std::string indexInput;
    std::getline(std::cin, indexInput);
    
    try {
        std::istringstream iss(indexInput);
        int index;
        iss >> index;
        
        if (iss.fail() || !iss.eof()) {
            std::cout << "Invalid input. Please enter a valid index." << std::endl;
            return;
        }
        
        if (index < 0 || index >= contactCount) {
            std::cout << "Invalid index." << std::endl;
            return;
        }
        
        const Contact& contact = contacts[index];
        std::cout << "First Name: " << contact.getFirstName() << std::endl;
        std::cout << "Last Name: " << contact.getLastName() << std::endl;
        std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
        std::cout << "Nickname: " << contact.getNickname() << std::endl;
        std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
    }
    catch (...) {
        std::cout << "Invalid input. Please enter a number." << std::endl;
    }
}

void PhoneBook::exitPhoneBook() {
    std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
    std::exit(0);
}