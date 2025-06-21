#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void)
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << GREEN << "Enter command (ADD, SEARCH, or EXIT): " << RESET;
        std::getline(std::cin, command);

        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
        {
            phoneBook.exitPhoneBook();
            break;
        }
        else
            std::cout << RED << "Invalid command. Please try again." << RESET << "\n" << std::endl;

        if (std::cin.eof())
            break;
    }
    return (0);
}