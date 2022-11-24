#include "Weapon.hpp"

Weapon::Weapon(std::string Value)
{
    this->type=Value;
}

void Weapon::setType(std::string Value)
{
    this->type=Value;
    std::cout<< "The new weapon is: " << this->type << std::endl;  
}

std::string Weapon::getType()
{
    return(this->type);
}

Weapon::~Weapon()
{
}
