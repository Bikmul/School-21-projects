#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "iostream"
#include "string"


class Weapon
{
private:
    std::string type;
public:
    
    Weapon(std::string Value);
    ~Weapon();
    void setType(std::string Value);
    std::string getType();
};




#endif
