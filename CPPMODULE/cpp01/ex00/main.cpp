#include "Zombie.hpp"

int main()
{
    std::string name;
    std::cout << "Введите имя зомби: ";
    std::cin >> name;
    Zombie *new_Zombie;
    new_Zombie = newZombie(name);
    delete new_Zombie;
    randomChump(name);
}