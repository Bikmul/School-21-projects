#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << " ScavTrap(void)" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << " ScavTrap(" << name << ")" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	ClapTrap::operator=(other);
	return (*this);
}


void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap:: ";
	this->ClapTrap::attack(target);
}

void ScavTrap::guardGate()
{
	std::cout << " Gate keeper mode!!!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << " ScavTrap(" << this->getName() << ") was destroyed!" << std::endl;
}
