#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie* Horde = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        Horde[i].setname(name + std::to_string(i+1));
        Horde[i].announce();
    }
    return(Horde);
};
