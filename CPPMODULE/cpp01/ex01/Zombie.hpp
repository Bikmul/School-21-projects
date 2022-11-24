#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void announce();
    void setname(std::string nameValue);
};

Zombie *zombieHorde(int N, std::string name);

#endif