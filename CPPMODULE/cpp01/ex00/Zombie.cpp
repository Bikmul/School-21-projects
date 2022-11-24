#include "Zombie.hpp"

    Zombie::Zombie(std::string nameValue)
    {
        name = nameValue;
        std::cout << this->name << " is created" << std::endl;
    };

    Zombie::~Zombie()
    {
        std::cout << this->name << ": is dead" << std::endl;
    };
    
    void Zombie::announce()
    {
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    };
