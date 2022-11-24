#include "Zombie.hpp"

    Zombie::Zombie()
    {
        std::cout << this->name << "Zombie is created" << std::endl;
    };

    Zombie::~Zombie()
    {
        std::cout << this->name << ": is dead" << std::endl;
    };
    
    void Zombie::announce()
    {
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    };

    void Zombie::setname(std::string nameValue)
    {
        name = nameValue;
    };
