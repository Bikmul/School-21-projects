#include "HumanA.hpp"

HumanA::HumanA(std::string Value, Weapon &weapon) : weapon(weapon)
{
    this->name=Value;
}

void HumanA::attack()
{
    std::cout<< this->name << " attack whis his " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}