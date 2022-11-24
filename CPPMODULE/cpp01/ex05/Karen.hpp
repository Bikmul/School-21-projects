#ifndef KAREN_HPP
#define KAREN_HPP
#include "iostream"
#include "string"

class Karen
{
private:
    void info();
    void error();
    void warning();
    void debug();
public:
    Karen();
    ~Karen();
    void complain(std::string level);
};

#endif