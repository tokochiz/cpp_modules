#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " destroyed." << std::endl;
}

void Zombie::announce() const{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
