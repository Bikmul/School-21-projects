#include "Zombie.hpp"

int main()
{
    int i;
    std::cout << "Введите количесво зомби для создания:";
    std::cin >> i;
    Zombie *Zombie_Horde  = zombieHorde(i, "Zombie #");
    delete [] Zombie_Horde;
    return (0);
}