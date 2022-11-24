#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << " ClapTrap::ClapTrap(void)" << std::endl;
	this->name = nullptr;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << " ClapTrap::ClapTrap(" << name << ")" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << " ClapTrap::ClapTrap(other)" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << " ClapTrap::operator=(other)" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << " ClapTrap " << this->name << " attacks "
			  << target << ", causing " << this->attackDamage
			  << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << " You(" << this->name << ") take " << amount << " damage!" << std::endl;
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
		this->hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << " You(" << this->name << ") be repaired " << amount << " hit points!" << std::endl;
	this->hitPoints += amount;
}

ClapTrap::~ClapTrap()
{
	std::cout << " ClapTrap(" << this->name << ") was destroyed!" << std::endl;
}
