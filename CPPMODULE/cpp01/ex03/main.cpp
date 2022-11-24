#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon knife = Weapon("knife");
        HumanA Gleb("Gleb", knife);
        Gleb.attack();
        knife.setType("special long knife");
        Gleb.attack();
    }
    {
        Weapon knife = Weapon("knife");
        HumanB Matvey("Matvey");
        Matvey.setWeapon(knife);
        Matvey.attack();
        knife.setType("special long knife");
        Matvey.attack();
    }
}

