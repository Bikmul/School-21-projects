#include "HumanB.hpp"

HumanB::HumanB(std::string Value)
{
    this->name=Value;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
    std::cout<< this->name << " get weapon: " << this->weapon->getType() << std::endl;
}

void HumanB::attack()
{
    std::cout<< this->name << " attack whis his " << this->weapon->getType() << std::endl;
}


HumanB::~HumanB()
{
}
